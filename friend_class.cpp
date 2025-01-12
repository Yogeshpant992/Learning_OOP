#include<iostream>
using namespace std;
class A
{
    private:
    int x = 56;
    float y =345;
    friend class B;
};
class B
{
    public :
    void display(A a, A y)
    {
        cout<<"Value of x is "<<a.x+a.y<<endl;
    }
};
int main()
{
    A a;
    A z;
    B b;
    b.display(a,z);
    return 0;
}
