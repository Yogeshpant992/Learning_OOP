#include<iostream>
#include<cstring>
using namespace std ;
union library{
    int book_no;
    char name[50];
    float price;
};
 int main ()
 {
    union library copy;
    copy.book_no = 22;
    strcpy(copy.name," last Leaf");
    copy.price = 2345.67;

    cout<<"The number of the book is  "<<copy.book_no<<endl;
    cout<<"The name of the book is "<< copy.name<<endl;
    cout<<"The price of the book is "<<copy.price<<endl;
    return 0;
 }