#include<iostream>
using namespace std;
int main()
{
    int num[5], sum;
    do{
    cout<<"Entre five intergers\n";
    cin>>num[0];
    cin>>num[1];
    cin>>num[2];
    cin>>num[3];
    cin>>num[4];
    }while(num[5]<6);
    sum= num[0]+num[1]+num[2]+num[3]+num[4];
    cout<<"sum is"<<sum<<"\n";
    cout<<"Thes size of array nums is"<<sizeof(num) / sizeof(int);
    return 0;
}