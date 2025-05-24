#include<iostream>
using namespace std;
class a
{
    public:
   a()
   {
        cout<<"function 1 called"<<endl;
        void surprise();
   }
    void suprise()
    {
        cout<<"secret"<<endl;
    }

};
void suprise()
{
    cout<<"surprise"<<endl;
}
   class b: public a
{
     public : 
     b() {
            cout<<"function 2 called"<<endl;
         }

};
 int main()
 {
    a obj1;
    suprise();
    b obj2;
    obj1.suprise();
 }