//Write a program to find the total 1s (binary format) present in a number...
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int count = 0;
    while(num > 0)
    {
        if((num & 1) == 1)
        count ++;
        num = num >> 1;
    }
    cout<<count;
    return 0;
}