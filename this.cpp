#include<iostream>
using namespace std;
class XYZ
{
    public:
    int x =45;
    public :
    int help()
    {
        this -> x = x +20;
        return x;
    }
};
int main()
{
    XYZ aa;
    cout<<"The returned value is :"<<aa.help()<<endl;
    return 0; 
}