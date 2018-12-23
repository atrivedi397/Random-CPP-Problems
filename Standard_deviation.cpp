#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ///Provide number of elements and elements to calculate the standard deviation

    short size; float mean , sq_distance= 0 , sum_of_elements = 0;
    cin>>size;
    auto array = new int[size];
    for(int i = 0; i < size; i++)
        cin>>array[i];
    for(int j = 0; j < size; j++)
        sum_of_elements+= array[j];

    mean = sum_of_elements/size;

    for(int i = 0; i < size; i++)
        sq_distance+= ((array[i]-mean)*(array[i]-mean));

    cout<<sqrtf((sq_distance/size));

    return 0;
}

//Created by atrivedi on 6/3/18.