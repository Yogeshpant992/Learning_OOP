#include<iostream>
using namespace std;
class MYclass
{
    public :
    int a ;
    int myfunction(MYclass obj)
    {
        a = a * obj.a;
    }
};
int main ()
{
   MYclass E1,E2,E3;
   E1.a = 23;
   E2.a = 42;
   E3.a = 10;

   cout<<"inital Value "<<E1.a<<" "<<E2.a<<endl;

   E1.myfunction(E2);


   E3.a= E1.a;

   cout<<"Multiplication value "<<E3.a<<endl;
   return 0;
}