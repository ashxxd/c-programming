#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    try
    {
        int x;
        cin>>x;
        if(x==0)
            throw 404;
        else if(x==1)
            throw "a";
        else if(x==2)
            throw "25 ash ";
        else if(x==3)
            throw 3.14;
    }

    catch (int e){
        cout<<"cought an integer exception:"<<e<<endl;
    }
    catch (char e){
        cout<<"cought an character exception:"<<e<<endl;
    }
    catch (double e){
        cout<<"cought an double exception:"<<e<<endl;
    }
    catch (const char* s){
        cout<<"cought an string exception:"<<s<<endl;
    }
    return 0;
}
