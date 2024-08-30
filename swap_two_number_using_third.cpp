#include<iostream>
using namespace std ;
class Swap{
    private :
    int a , b ,temp;
    public :
    void getdata()
    {
        cout<<"Enter two numbers";
        cin>>a;
        cin>>b;
    }
    void swapno(){
        temp = a ;
        a = b;
        b = temp ;
    }
    void display(){
        cout<<"The swap number is a "<< a << endl;
        cout<<"B is " <<b << endl;
}
};
int main()
{
    Swap a;
    a.getdata();
    a.display();
    a.swapno();
    a.display() ;
    return 0;
}