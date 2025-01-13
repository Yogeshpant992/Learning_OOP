#include<iostream>
using namespace std;
class Student
{
    private :
    int x , z;
    char y[40];
    public:
    Student()
    {
        cout<<"Enter the roll no."<<endl;
        cin>>x;
        cout<<"Enter the name"<<endl;
        cin>>y;
        cout<<"Enter the fees"<<endl;
        cin>>z;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    }
};
int main ()
{
    Student S;
    S.display();
    return 0;
}