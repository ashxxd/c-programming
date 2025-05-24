#include<iostream>
using namespace std;

class BatchD
{
    int roll;
    char gender;            ;
    public:
        BatchD()//contructor
        {
            cout<<"play\n";
        }
        void add();
        string display()
        {
            
            cout<<"hello";

        }
};
void BatchD::add()//scop resolution
{
    cout<<"addition..........";
    
}
int main()
{
    BatchD a;//object of class
    a.add();
    a.display();
    return 0;
}