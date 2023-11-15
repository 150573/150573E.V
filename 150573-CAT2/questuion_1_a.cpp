//150573
//course DBIT Sep-Dec 2023
//Strathmore University
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Entre three numbers to determine the minimum";
    cin>>num1, cin>>num2, cin>>num3;
    switch(num1 < num2 > num3){
    case 0:
    cout<<num1<<"is minimum\n";
    break;
    case 1:
    cout<<num2<<"is minimum\n";
    break;
    case 2:
    cout<<num3<<"is minimum\n";
    }
    return 0;
}