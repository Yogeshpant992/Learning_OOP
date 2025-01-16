#include<iostream>
using namespace std;
class MY_name
{
    int num;
    public:
    void set_number(int value)
    {
        num = value;
    }
    void show_number();
};
void MY_name :: show_number()
{
  cout<<num;
}
int main()
{
    MY_name object, *p;
    object.set_number(24);
    object.show_number();
    p=&object;
    p->show_number();
    return 0;
}