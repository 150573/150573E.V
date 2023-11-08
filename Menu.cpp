#include<iostream>
using namespace std;
int main()
{
    //command code
    int opt, total_cost;//declaration of variables
    //welcome output to customer
    cout<<"Welcome to Lamu Dishes\n";
    cout<<"please view our Menu and select the prefeered food of your choice\n";
    cout<<"Entre opt 1,2,3,4,5\n";
    //Users input of option(ipt)
    cin>>opt;
    switch(opt){
        case 1://first option of choice from the user
        cout<<"plain white rice=80/=::Beef stew=100/=\n";//list of food and thneir prices on the first option
        total_cost=80+100;//total cost of the food chosen
        cout<<"total_cost is"<<total_cost<<"\n";//total to be paid by customer
        break;
        case 2://second option of choice from the user
        cout<<"1kg of roasted beef=120/=::Pilaw=120/=";//list of food and thneir prices on the first option
        total_cost=120+120;//total cost of the food chosen
        cout<<"total_cost is"<<total_cost<<"\n";//total to be paid by customer
        break;
        case 3://third option of choice from the user
        cout<<"pilaw=120/=::biriani stew 60/=\n";//list of food and thneir prices on the first option
        total_cost=120+60;//total cost of the food chosen
        cout<<"total_cost is"<<total_cost<<"\n";//total to be paid by customer
        break;
        case 4://fourth option of choice from the user
        cout<<"Ugali=40/=::Beef stew=100\n";//list of food and thneir prices on the first option
        total_cost=40+100;//total cost of the food chosen
        cout<<"total_cost is"<<total_cost<<"\n";//total to be paid by customer
        break;
        case 5://fifth option of choice from the user
        cout<<"Spaghetti=150/=::Meat balls=80/=\n";//list of food and thneir prices on the first option
        total_cost=150+80;//total cost of the food chosen
        cout<<"total_cost is"<<total_cost<<"\n";//total to be paid by customer
    }
    return 0;
}