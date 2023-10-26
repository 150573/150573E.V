//Include user profile(Names, Meal,Movie)
#include<iostream>
using namespace std;
//command code
int main()
{
    string first_name, second_name, full_name, favourite_meal, favourite_movie;
    cout<<"entre first_name\n";//output first name
    getline(cin, first_name);//user input first name
    cout<<"entre second_name\n";//output second name
    getline(cin, second_name);//user input second name
    cout<<"entre full_name\n";//out put full nmae
    getline(cin, full_name);//user input full nmae
    cout<<"entre favourite_meal\n";//out put favourite meal
    getline(cin, favourite_meal);//user input favourite meal
    cout<<"entre favourite_movie\n";//out put favourite movie
    getline(cin, favourite_movie);//user input favourite movie

    return 0;
}