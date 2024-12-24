#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int num = n;
    int count = 0;
    while(n > 0)
    {
        n = n >> 1;
        count ++;
    }
    cout<<"Number of digits of "<<num<<" in binary format are: "<<count;
    //return 0;
}