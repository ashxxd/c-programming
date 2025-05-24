#include<iostream>
using namespace std;
class animal
{
    public:
        void sound();
};
class dog: public animal
{
    public:
        void sound(){cout<<"dog=bow-bow"<<endl;}
};
class cat: public animal
{
    public:
       void sound(){cout<<"cat=meow-meow"<<endl;}
};
class cow: public animal
{
    public:
        void sound(){cout<<"cow=moo-moo"<<endl;}
};
class sheep: public animal
{
    public:
        void sound(){cout<<"sheep=baa-baa"<<endl;}
    ~sheep(){
        cout<<"distructor";
    }
};


int main()
{
    dog d;
    d.sound();
    cat c;
    c.sound();
    cow w;
    w.sound();
    sheep s;
    s.sound();
}