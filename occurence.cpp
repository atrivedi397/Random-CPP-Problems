/* Input sequence
  1. First line of input will contain number of test cases
  2. Second line will contain number of elements and what to check
  3. This line will contain sorted array of numbers to find the occurrence from.


  Sample Test Case :
  2
  5 7
  1, 2, 3, 4, 8
  6, 9
  2, 4, 6, 8, 9, 9


  Sample Output:
  -1
   2


 */
#include <iostream>
using namespace std;

int return_count(const int array[], int Size, int element)
{
    int index = 0, count = 0; bool flag = false;
    for (int i = 0; i < Size ; ++i)
    {
        if(array[i] == element)
        {
            flag = true;
            index = i;
            break;
        }
    }

    if(flag)
    {
        for (int j = index; j < Size; ++j)
        {
            if(array[j] == element)
            {
                count++;
            }
        }

        cout<<count;
    }
    else
    {
        cout<<-1;
    }
}

void take_input()
{
    int Size;
    cin>>Size;
    auto* array = new int[Size];
    int element;
    cin>>element;
    for(int i = 0; i < Size; i++)
    {
        cin>>array[i];
    }

    return_count(array, Size, element);
}

int main() {

    //code
    int test_cases;
    cin>>test_cases;

    for(int i = 1; i <= test_cases; i++)
    {
        take_input();
    }

    return 0;
}


//
// Created by atrivedi on 7/18/18.
//

