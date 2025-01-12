#include<iostream>
using namespace std;
inline int product(int a, int b)
{
    return a+b;
}
int add()
{
    int a = 23;
    int b = 43;
    return product(a,b);
}
int main ()
{
    cout<<"The value of the addition is "<<add()<<endl;
    return 0;
}