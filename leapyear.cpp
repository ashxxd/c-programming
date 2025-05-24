#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year";
    cin>>year;
    string result =(year % 4==0 &&     (year %100!=0 && year %400==0))?"leap year":"not leap year";
    cout<<result<<endl;
    
    return 0;
}