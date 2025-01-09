#include<iostream>
using namespace std;
class student
{
    int rollno ;
    char name[37];
    double fees;
public:
    student()
    {
        cout<<"Enter the roll no."<<rollno<<endl;
        cin>>rollno;
        cout<<"Enter the name"<<name;
        cin>>name;
        cout<<"Enter the fees"<<fees;
        cin>>fees;
    }
    void display()
    {
        cout<<rollno<<"\t"<<name<<"\t";
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}