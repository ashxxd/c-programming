#include<iostream>
using namespace std;

class BatchD
{
    int x,y;
    char gender;            ;
    public:
        BatchD()//contructor
        {
            cout<<"TOP LEVEL SHITT\n";
        }
        BatchD(int a,int b)
        {
            x=a;
            y=b;
            cout<<"value of a and b "<<a<<" and "<<b<<endl;
        }
        BatchD(BatchD &c)
        {
            x= c.x;
            y=c.y;
            cout<<"it's coping from b\n";
            cout<<"value of a and b is "<<x<<" and "<<y<<endl;
        }
};
int main()
{
    BatchD b(10,20);
    BatchD a;
    BatchD c= b;
}
