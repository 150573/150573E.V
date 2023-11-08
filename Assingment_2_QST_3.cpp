#include<iostream>
using namespace std;
int main()
{
    string Full_name, course; 
    int score;
    cout<<"Entre Full_name\n";
    cin>>Full_name;
    cout<<"Entre course\n";
    cin>>course;
    cout<<"Entre score\n";
    cin>>score;
    switch (score)
    {
    case 1:
    cout<<"You scored an F\n";
        break;
        case 2:
        cout<<"You scored an F\n";
        break;
        case 3:
        cout<<"You scored an F\n";
        break;
        case 4:
        cout<<"You scored an D\n";
        break;
        case 5:
        cout<<"You scored a C\n";
        break;
        case 6:
        cout<<"You scored a B\n";
        break;
        case 7:
        cout<<"You scored a A\n";
        break;
        case 8:
        cout<<"You scored a A\n";
        break;
        case 9:
        cout<<"You scored a A\n";
        break;
        case 10:
        cout<<"You scored a A\n";
        break;
    default:
        break;
    }
    return 0;
}