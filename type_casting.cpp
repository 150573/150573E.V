/*Implicit(automatic conversion)
Explicit(operatoor conversion)*/
#include<iostream>
using namespace std;
//comment code
int main()
{
double num1  =15.5; //Declare and initialize a dokuble interger
int num2; //Declare and initialize variable
cout<<"Implicit Type Casting\n";
num2 =num1;//Implicit type casting
cout<<"value of num2"<<num2<<"\n";
cout<<"\n\nExplicit Type Casting\n";
cout<<"num1 before explicit conversion:"<<num1<<"\n";
num2 = (int)num1;//Explicit Type Casting
//Explicit Conversion (operator function)
num2 =static_cast<int>(num1);//Static cast operator is used to convert the value of
num2 =static_cast<int>(num1);
num2 =static_cast<int>(num1);
num2 =static_cast<int>(num1);
cout<<"num1 after eplicit conversion:"<<num1<<"\n";
cout<<"num2 after explicit conversion:"<<num2<<"\n";
return 0;
}