#include<iostream>
using namespace std;
int main()
{
    string book,children, regular, reference;
    int book_fee, days;
    cout<<"entre number of days\n";
    cin>>days;
    children=0-20;
    regular=20-40;
    reference=40-80;
    cin>>book;
        if(days<10 && days<=20 && "children"){
            cout<<"book fee is 800/=\n";
        }
        else if(days>20 && days<=40 && "regular"){
            cout<<"Book_Fee is 2500/=\n";
        }
        else if(days>40 && days<=80 && "reference"){
            cout<<"Book_Fee is 1500/=\n";
        }
        else{
            cout<<"Fine_amount is 4000/=\n";
        }
        return 0;
}