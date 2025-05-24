#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int factor=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        factor++;
        break;
    } 
    if(factor==0)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }

    return 0;
}