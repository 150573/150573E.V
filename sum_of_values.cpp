#include<iostream>
using namespace std;
int main()
{
    cout<<"A program to output sum of values between 20 and 25\n";
    int sum =0;
    for(int num=20;num<=25;num++){
        sum=sum+num;
    }
    cout<<sum<<"\n";
    return 0;
}