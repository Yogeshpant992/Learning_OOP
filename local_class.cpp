#include<iostream>
using namespace std;
void mno()
{
    class ABC
    {
        public :
        int a =10;
        void method()
        {
        cout<<"The number is always here "<<a<<endl;
        }
    };
    ABC aa;
    aa.method();
}
int main()
{
    int x =22;
    mno();
}