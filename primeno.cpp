#include<iostream>
using namespace std;

   int main()                  
{
    int a=569;
    int factorial=0;
    for(int i=1;i<=69;i++)
    {
        if(a%i==0)
        factorial++;
    }
    if(factorial==2)
    {
        cout<<a;
    }

    return 0;
}