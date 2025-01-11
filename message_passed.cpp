#include<iostream>
using namespace std;
class Number{
 public:
    void method(int number){
        cout<<"The number i like the most is : "<<number<<endl;
    }
};
int main ()
{
    Number here;
    int x = 22;
    here.method(x);//message passed
return 0;
}