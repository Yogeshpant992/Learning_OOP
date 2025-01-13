#include<iostream>
using namespace std;
class XYZ
{
 public :
    int id ;
    char name[50];

    void get_name();
    void put_name();
};
void XYZ :: get_name()
{
    cout<<"Enter the id no."<<endl;
    cin >> id;
    cout<<"Enter the name"<<endl;
    cin>>name;
}
void XYZ :: put_name()
{
    cout<<id<<" ";
    cout<<name<<endl;
}
int main ()
{
    XYZ aa[30];
    int n;
    cout<<"Enter the no. of the employees :"<<endl;
    cin>>n;
    for(int i=0 ; i<n; i++)
    { 
        aa[i].get_name();
            }
    for(int i=0; i<n; i++)
    {
                aa[i].put_name();

    }
    return 0;
}
