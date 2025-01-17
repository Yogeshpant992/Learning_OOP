#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Addition{
    public :
    char s1[25];
    char s2[25];

    Addition(char str1[], char str2[])
    {
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }

    void operator+()
    {
        cout<<"Concataion"<<endl<<strcat(s1,s2);
    }
};
int main()
{
    char str1[]={"This is "};
    char str2[]={"a world"};

    Addition a1(str1,str2);
    +a1;
    return 0;
    }