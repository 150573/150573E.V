//A program that outputs even numbers between 12 to 50
#include<iostream>
using namespace std;
int main()
{
    int number=12;
    do{
        cout <<number<< "\n";
        number+=2;
    }
    while(number<=50);
    return 0;
}