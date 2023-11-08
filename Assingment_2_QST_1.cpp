//loan qualification check up//
//done by 150573//
#include<iostream>
using namespace std;
int main()
{
    // code input
    int age, Bank_balance, Customer_Period_in_Months;//declaration and initialization//
    bool CRB, good, bad;//declaration and initialization//
    CRB=1, CRB=2;//initializing CRB with different figures 1 and 2//
    CRB=1-(good), CRB=2-(bad);//after initializing, declare each figure with its own function 1 for good and 2 for bad//
    cout<<"entre age\n";//Inquire the user to input their age//
    cin>>age;//Input of the user from the output of age//
    if(age>22){//If condition to be caried on the age//
        cout<<"entre Bank_balance\n";//Inquire for the users bank balance after the if condition if age is above 22//
        cin>> Bank_balance;//Input of the  user's bank balance//
        string message=(Bank_balance>50000)?"Next_Step\n":"!!!!!";//message to be relayed to next step if the bank balance is greater than fifty thousand//
        cout<<message;//message to be  printed//
        if(Bank_balance>50000){//if bank balance is greater than fifty thousand proceed in to next step//
            cout<<"Entre Customer_Period_in_Months\n";//Inquire from the user his customer period in months//
            cin>>Customer_Period_in_Months;//Input of the user//
        }
        if(Customer_Period_in_Months>6){//If jcustomer period is greater than six months proceed in inputing user's CRB//
            cout<<"Entre CRB\n";//Inquire the user for their CRB//
            cin>>CRB;//User's CRB input//
        }
        else{//If none of  the informations are included thus declare the process invalid
            cout<<"invalid\n";//declare invalid//
        }
    }
        string message=(age>22&&Bank_balance>50000&&Customer_Period_in_Months>6&&CRB==1)?"Approved for loan\n":"Not Approvedfor loan\n";//If user meets all qualifications they are qualified and approved for the loan but if they don't meet the qualifications they are not approved for the loan//
        cout<<message;//Message to be relayed either approved or not approved//
    return 0;
}
    
