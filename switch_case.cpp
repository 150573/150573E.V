#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Hi welcome to DBIT\n";
    cout<<"This is then timetable for your semister\n";
    cout<<"Choose either of the selections 1.Monday 2.Tuesday 3.Wednesday 4.Thursday 5.Friday\n 6.Saturdcay\n";
    cout<<"Entre choice 1,2,3,4....days of the week\n";
    cin>> choice;
    switch(choice){
        case 1:
        cout<<"8am-10am DBIT Information Technology 1110\n:12pm-2pm Mathematics of Computing 1111\n";
        break;
        case 2:
        cout<<"8am-11am Accounting 1112\n:2pm-4pm Introduction to Ethics 1113\n";
        break;
        case 3 :
        cout<<"8am-10am Intoduction to programming 1114\n:1pm-3pm Mathematics of Computing\n";
        break;
        case 4:
        cout<<"8am-11am Math for Business 1112\n:1pm-3pm Theology\n 5pm-7:30pm Fundamentals of IT\n";
        break;
        case 5:
        cout<<"8am-10am Accounting 1110\n:12pm-2pm Fundamentals of it\n";
        case 6:
        cout<<"10am-12:30pm Introduction to Ethics\n";
        break;
        default:
        cout<<"Not Applicable\n";
    }
    return 0;
}