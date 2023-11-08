#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Entre age\n";
    cin>>age;
    if(age>=5 && age<=15){
        cout<<"ticket_price is 500/=\n";
    }
    else if(age>15 && age<=18){
        cout<<"ticket_price is 1000/=\n";
    }
    else if(age>18 && age <=25){
        cout<<"ticket_price is 1200/=\n";
    }
    else if(age>25){
        cout<<"ticket_price is 1500/=\n";
    }
    else{
        cout<<"invalid\n";
    }
    return 0;
}