#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    // Define the duration for each light phase in seconds
    const int redDuration = 5;
    const int yellowDuration = 2;
    const int greenDuration = 5;

    int currentLight = 1; // 1 for Red, 2 for Yellow, 3 for Green

    while (true) {
        switch (currentLight) {
            case 1:
                // Red light
                cout << "Red Light - Stop!\n";
                this_thread::sleep_for(chrono::seconds(redDuration));
                currentLight = 2; // Switch to Yellow
                break;
            case 2:
                // Yellow light
                cout << "Yellow Light - Prepare to Go!\n";
                this_thread::sleep_for(chrono::seconds(yellowDuration));
                currentLight = 3; // Switch to Green
                break;
            case 3:
                // Green light
                cout << "Green Light - Go!\n";
                this_thread::sleep_for(chrono::seconds(greenDuration));
                currentLight = 1; // Switch to Red
                break;
                default:
                cout<<"invalid\n";
        }
    }

    return 0;
}
