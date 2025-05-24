#include<iostream>
using namespace std;
int main()
{
    int n;
    string name;
    cout<<"enter your name=";
    cin>>name;
    cout<<"welcome to cafe "<<name<<endl;
    cout<<"here is what we have in our menu \n 1. cappichno\n 2.espresso\n 3.latte\n ";
    cout<<"enter the option 1,2or 3 =";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"sir your cappichno will be ready shortly";
        break;
    case 2:
        cout<<"sir your espresso will be ready shortly";
        break;
    case 3:
        cout<<"siryour latte will be ready shortly";
        break;
    default:
    cout<<"sorry!we don't have it";
    }
    return 0;
}