#include<iostream>
using namespace std;
class Name {
public :
    int c ;
    int b;
    void calling();//declare the method
    void Write_here()//inside the class method 
    {
        cout<<"The number shared is :"<<c<<endl;
    }
};
void Name::calling()//outside class calling
{
   cout<<"There is a no here "<<b<<endl;
}
int main()
{
    Name two;//objects
    two.c = 22;
    two.b = 23;
    two.calling();
    two.Write_here();
    return 0;
}