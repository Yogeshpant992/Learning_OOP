#include<iostream>
using namespace std;
template<typename T>
void swapValues(T&a,T&b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1= 10;
    int num2= 20;
    cout<<"Before Swapping "<<endl<<num1<<endl<<num2<<endl;

    swapValues(num1,num2);

    cout<<"After Swapping "<<num1<<endl<<num2<<endl;

    double dl1 =  3.14;
    double dl2 =  4.56;
    cout<<"Before Swapping"<<dl1<<endl<<dl2<<endl;

    swapValues(dl1,dl2);

    cout<<"After Swapping"<<dl1<<endl<<dl2<<endl;

    return 0;
}
