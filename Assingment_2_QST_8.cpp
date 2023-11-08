#include<iostream>
using namespace std;
int main()
{
    int total_cost, discount, total_pay;
    cout<<"Entre total_cost\n";
    cin>>total_cost;
    cout<<"Calculate_total_pay\n";
    total_pay=total_cost*discount;
    if(total_cost>7500 && total_cost<=10000){
        cout<<"Discount is 5%\n";
    }
    else if(total_cost>10000 && total_cost<=15000){
        cout<<"Discount is 10%\n";
    }
    else if(total_cost>15000 && total_cost<=25000){
        cout<<"Discount is 15%\n";
    }
    else if(total_cost>25000 && total_cost<=50000){
        cout<<"Discount is 30%\n";
    }
    else if(total_cost>50000 && total_cost<=100000){
        cout<<"Discount is 45%\n";
    }
    else if(total_cost>100000){
        cout<<"Discount is 50%\n";
    }
    else{
        cout<<"invalid\n";
    }
    cout<<"total_pay:"<<total_pay<<"\n";
    return 0;
}