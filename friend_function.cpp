#include<iostream>
using namespace std;
class ABC;
class NO;
class XYZ
{
    protected:
    int money = 200;
    friend void zro(ABC,XYZ,NO);
};
class ABC
{
    protected:
    int money = 30;
    friend void zro(ABC,XYZ,NO);
};
class NO
{
    private :
    int reso = 234;
    friend void zro(ABC,XYZ,NO);
};
void zro(ABC x1, XYZ x2, NO x3)
{
    cout<<"The total value of money is "<<x1.money+x2.money+x3.reso<<endl;
}
int main ()
{
    ABC re0;
    XYZ re3;
    NO re4;
    zro(re0,re3,re4);
    return 0;
}