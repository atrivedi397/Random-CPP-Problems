#include<bits/stdc++.h>

void SieveOfEratosthenes(int num){
    auto primes = new int[num];

    int first_prime = 2;
    for(int i = 0; i < num; i++)
        primes[i] = first_prime++;

    first_prime = 2;

    while(first_prime <= floor(sqrt(num))){
        for (int j = first_prime-1; j < num; ++j) {
            if (primes[j] % first_prime == 0)
                primes[j] = -1;
        }
        first_prime += 1;
    }

    std::vector<int>total_primes;
    for (int k = 0; k < num;) {
        if (primes[k] == -1 || primes[k] > num){
            k++;
        } else {
            std::cout << primes[k] << "\n";
            total_primes.push_back(primes[k]);
            k++;
        }
    }

    std::cout<< "Total primes are : "<< total_primes.size();

    delete[] primes;
    total_primes.clear();
    total_primes.shrink_to_fit();
}

int main(){
    int number;
    std::cout<<"Enter the number : ";
    std::cin>>number;
    SieveOfEratosthenes(number);
}

//
// Created by atrivedi on 11/1/18.
//

