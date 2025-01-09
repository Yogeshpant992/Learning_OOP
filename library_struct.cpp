#include<iostream>
#include<string>
using namespace std;
struct Book
{
    string title ;
    string Auother ;
    string ISBN ;
    float price;
    int Available_copies ;
};
int main ()
{
    struct Book one ;
    one.title=" Great Gatsby";
    one.Auother="F.Scott Fitzgerald";
    one.ISBN="9780743273565";
    one.price= 10.99;
    one.Available_copies= 3;
    cout<<"Book Title :"<<one.title<<endl;
    cout<<"Auother :"<<one.Auother<<endl;
    cout<<"ISBN :"<<one.ISBN<<endl;
    cout<<"Price :"<<one.price<<endl;
    cout<<"Available copies :"<<one.Available_copies<<endl;
    return 0;
    
}
