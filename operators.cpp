#include<iostream>
using namespace std;

   int main()                  
{
    int a;
    cout<<"enter a number to check if it is prime or not";
    cin>>a;
    string result =(a%2==0 ||a%3==0||a%5==0|| a%4==0 || a%8==0)?"not prime":"prime";
    cout<<result;
    return 0;
}