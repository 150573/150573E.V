#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"entre two numbers to find maximum\n";
    cin>>num1, cin>>num2;
    switch(num1 > num2){
        case 0:
        cout<<num2<<"is maximum number\n";
        break;
        case 1:
        cout<<num1<<"is maximum number\n";
        break;
        default:
        cout<<"Invalid\n";
    }
    return 0;
}