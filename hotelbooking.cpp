#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{

    int r,single_rooms,double_rooms,total,a,b,c,days;
    string name;
    cout << endl;
 cout << "===================================================" << endl;
 cout << "        Welcome to MoonRest - A Nightly Escape      " << endl;
 cout << "===================================================" << endl;
 cout << endl;
 cout << "  Good evening, traveler." << endl;
 cout << "You've entered a place where the night whispers peace," << endl;
 cout << "and every moment is a pause from the chaos." << endl;
 cout << endl;
 cout << "Let us make your stay... unforgettable." << endl;
 cout << endl;
 cout << "Please wait while we prepare your moonlit suite " << endl;

 
    cout<<"what's your name\n";
    cin>>name;
    cout<<"your contact number=";
    cin>>c;
    cout<<"How many days are you going to stay=";
    cin>>days;
    cout<<"hello "<<name;

    //single room
    cout<<" how many single rooms do you need =";
    cin>>single_rooms;
    ifstream read("rooms.txt");
    read>>r;
    

    if (r>single_rooms && single_rooms!=0)
    {
        b=(single_rooms*500)*days;
        cout<<single_rooms<<" no of rooms are availabe\n";
        cout<<"your price is "<<b<<"rs";
    }
    else if(single_rooms==0)
    {
        cout<<"ok";
    }
    
    
    else{
        cout<<"we are out of rooms ";
    }
    r-=single_rooms;
    
   ofstream write("rooms.txt");
    write<<r;


    // double rooms 
    cout<<"\nhow many double rooms do you need=";
    cin>>double_rooms;
    ifstream file("room.txt");
    file>>r;

    if (r>double_rooms && double_rooms!=0)
    {
        a=(double_rooms*800)*days;
        cout<<double_rooms<<" no of rooms are availabe\n";
        cout<<"your price is "<<a<<"rs";
    }
    else if(double_rooms==0)
    {
        cout<<"ok";
    }
    
    
    else {
        cout<<"we are out of rooms";
    }
    r-=double_rooms;
    total=a+b;
   ofstream myfile("room.txt");
    myfile<<r;

    cout<<"\nplease pay Your total is ="<<total;
    cout<<"\n UPI ID = vsssa@okaxis";
    cout<<"\nhave a great day ahead";

//
    ofstream mydata("persondata.txt",ios::app);
    mydata<<left<<setw(20)<<name<<setw(20)<<days<<setw(20)<<single_rooms<<setw(20)<<double_rooms<<setw(20)<<total<<endl;
} 