#include<iostream>
using namespace std;
void f()
{
    static int a = 21;
    cout<<a<<endl;
}
int main ()
{
    for(int i =0; i<=6; i++)
    {
        f();
    }
    return 0;
}
//value remains same 
// output :
/*21
21
21
21
21
21
21
*/
