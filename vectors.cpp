/* #include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4};
    for(int value: a)
    {
        cout<<value<<" ";
    }
} */



/* #include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);

    for(int value: a)
    {
        cout<<value<<" ";
    }
}  */


/* #include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4};
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    
    for(int value: a)
    {
        cout<<value<<" ";
    }
}  */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4};
    a.insert(a.begin()+2,7);
    a.insert(a.end(),5);
    
    for(int value: a)
    {
        cout<<value<<" ";
    }
} 