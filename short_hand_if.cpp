#include<iostream>
using namespace std;
int main()
{
    int age;
    cout <<"please entre age";
    cin >>age;
    string message=(age>=4)?"Admitted\n":"Declined minimum age not reached\n";
    cout<<message;
    return 0;
}