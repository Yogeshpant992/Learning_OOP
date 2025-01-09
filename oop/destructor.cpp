#include<iostream>
using namespace std;
class Demo
{
    int count=0;
    public:
    Demo(){
        count++;
        cout<<"The count is "<<count<<endl;
    }
    ~Demo(){
        cout<<"the constructor is destroyed "<<endl;
    }
};
int main ()
{
    Demo aa;
    Demo bb,cc;
}