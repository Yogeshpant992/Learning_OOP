#include<iostream>
using namespace std;
class base
{
    public:
    virtual void function(){

    }
};
class Derive : public base{

};
int main ()
{
    base *base_pr = new Derive;
    Derive *derive_ptr = dynamic_cast<Derive*>(base_pr);
    if(derive_ptr!=NULL)
        cout<<"The code is working";
        else
        cout<<"Can not cast Derive class";
        return 0;
}