#include <iostream>
using namespace std;

int main(void)
{
    int seconds;
    cout << " Enter the time period in seconds: ";
    cin >> seconds;

    double hours = seconds / (60 * 60);
    double minutes = seconds / 60;
    // double seconds = seconds;

    cout << "hours: " << hours << endl;
    cout << "minutes: " << minutes << endl;
    cout << "seconds: " << seconds << endl;
}