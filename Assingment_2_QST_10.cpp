#include<iostream>
using namespace std;
int main()
{
    int transaction_amount;
    cout<<"Entre transaction_amount\n";
    cin>>transaction_amount;
    if(transaction_amount>0){
        cout<<"insufficient amount\n";
    if(transaction_amount>500 && transaction_amount<=10000){
        cout<<"Withdraw amount\n";
    }
    if(transaction_amount>10000 && transaction_amount<=40000){
        cout<<"Withdraw amount\n";
    }
    if(transaction_amount>40000 && transaction_amount<=100000){
        cout<<"Withdraw amount\n";
    }
    if(transaction_amount>100000 && transaction_amount<=300000){
        cout<<"Withdraw amount\n";
    }
    if(transaction_amount>300000 && transaction_amount<=500000){
        cout<<"Withdraw amount\n";
    }
    if(transaction_amount>500000 && transaction_amount<=600000){
        cout<<"Withdraw amount\n";
    }
    if(transaction_amount>600000 && transaction_amount<=800000){
        cout<<"Withdraw amount\n";
    }
    else{
        cout<<"Withdrawal cannot happen\n";
    }
    }
    return 0;
}