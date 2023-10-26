//logical, Arithmetgic and Comparison operators
#include<iostream>
using namespace std;
//command code
int main()
{
    //Arithmetic operator
    int num1=40, num2=20;
    bool var1 = true, var2 = false;
    //additional operator'+'
    cout<<"sum of the two numbers:"<<num1+num2<<"\n";
    //subtraction operator
    cout<<"Difference of two numbers:"<<num1-num2<<"\n";
    //multiplication operator '*'
    cout<<"Product of the two:"<<num1*num2<<"\n";
    //division oplerfator '/'
    cout<<"division of the two:"<<num1/num2<<"\n";
    //modulas operator '%'
    cout<<"reminder when divided by 2"<<num1 % num2<<"\n";
    //increament operator '++'
    cout<<"increament num1 by 1:"<< ++num1<<"\n";
    //decreament operator '--'
    cout<<"dectreament num2 by 1:"<< --num2<<"\n";
    //greater then operator '>'
    cout<<"num1 '<' num2:"<<(bool)(num1 < num2)<<"\n";
    //less than operator '<'
    cout<<"num2 '>' num1:"<<(bool)(num2 > num1)<<"\n";
    //equal operator '=='
    cout<<"num1 '==' num2:"<<(bool)(num1 == num2)<<"\n";
    //not equal to '!='
    cout<<"num1 '!=' num2:"<<(bool)(num1 != num2)<<"\n";
    //*********Boolean operatros********
    //Boolean operator '&&'
    cout<<"var1 '&&' var2:"<<(var1 && var2)<<"\n";
    //Boolean operator '||'
    cout<<"var1 '||' var2:"<<(var1 || var2)<<"\n";
    return 0;
}