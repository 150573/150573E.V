/*Program that allows the user to input unlimited interges
Addition of the intergers 
till to a point where the user inputs 0*/
#include<iostream>
using namespace std;
int main() {
    int number, sum;// Initialize variables
    do {
        cout << "Enter intergers";// Prompt the user to enter a number
        cin >> number;
        sum = number+number;//Add the entered number to the sum
    } while (number !=0); // Continue looping while the entered number is not 0
    cout << "Sum of entered numbers:"<<sum<<"\n";// Output the sum
    return 0;
}
