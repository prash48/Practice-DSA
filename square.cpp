//Write a program to find power (square) of a given number using Bitwise operator...
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int n = num;
    int power = 2;
    int ans = 1;

    while(power > 0)
    {
        if((power & 1) == 1)
        {
            ans *= num;
        }
        power = power >> 1;
        num *= num;
    }
    cout<<"The power of "<<n<<" is "<<ans;
    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int ans = 1;
    ans = num * num;
    cout<<"The power of "<<num<<" is "<<ans;
    return 0;
}
*/