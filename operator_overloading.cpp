#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class String
{
    char name[25];
    public :
    void read()
    {
        cout<<"Enter a string"<<endl;
        cin.getline(name,25);
    }
    bool operator == (const  String& x)const
    {
        if(strcmp(name,x.name)==0)
        {
            return 1;
        }
        else
        return 0;
    }
};
int main()
{
    String s1,s2;
    s1.read();
    s2.read();
    if(s1==s2)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"unequal";
    }
    return 0;
}