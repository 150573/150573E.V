//150573
//Course DBIT Sep-Dec 2023
//Strathmore University
#include<iostream>
using namespace std;
int main()
{
    int choice;
    string username, password;
    cout<<"Entre username\n";
    cin>> username;
    cout<<"Entre Password";
    cin>>password;
    cout<<"Log in succesfull Welcome to my Simple App.Select an action to perform:\n";
    cout<<"Choose either of the following\n";
    cin>> choice;
    switch(choice){
    case 1:
    cout<<"Go to About Us Page\n";
    cout<<"This is a student learning how to code using a c++ language.\nThe c++ language is one of the best know language in coding\n";
    break;
    case 2:
    cout<<"Go to service page\n";
    cout<<"I'm not fully skilled but i can code a few things for anything that can help your in your business in earning money\n";
    break;
    case 3:
    cout<<"Go to full profile page\n";
    break;
    case 4:
    cout<<"Logout\n";
    cout<<"Entre username\n";
    cin>> username;
    cout<<"entre password\n";
    cin>> password;
    break;
    default:
        cout<<"not applicable\n";
    }
    return 0;
}