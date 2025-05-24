#include<iostream>
using namespace std;
class a
{
    public:
   a()
   {
    cout<<"function 1 called"<<endl;
   }
};
   class b: public a
{
     public : 
     b() {
            cout<<"function 2 called";
         }

};
 int main()
 {
    a obj1;
    b obj2;
 }