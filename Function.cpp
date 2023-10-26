#include<iostream>
using namespace std;
int globalVar = 30;
const int age =25;
//comment code
void myfunction(int num1, int num2)
{
    //function code black
    int localVar = 20;
    int sum = num1 +num2;
    cout<<"local variable inside myfunction is" << localVar;
    cout<<"sum ="<<sum;
}
//comment code
int main()
{
    //age =29;//should not work
    //invoking/calling the function myfunction
    myfunction(2,3);
   // cout << localVar; This is not expected to work because

   cout <<"Global variable value ="<< globalVar; // this is expected to work because
   cout<<"Age ="<<age;
   return 0;
}
