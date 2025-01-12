#include<iostream>
using namespace std;
class MYclass
{
    public :
    int a ;
    void myfunction(MYclass obj)
    {
        a = a * obj.a;
    }
};
int main ()
{
   MYclass E1,E2;
   E1.a = 23;
   E2.a = 42;

   cout<<"inital Value "<<E1.a<<" "<<E2.a<<endl;

   E1.myfunction(E2);

   cout<<"New value "<<E1.a<<" "<<E2.a<<endl;

   return 0;
}