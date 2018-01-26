#include <iostream>
using namespace std;

int main(void)
{
    int chirps_minute;
    cout << "Enter Chirps per minute: ";
    cin >> chirps_minute;

    int temperature = ( 40 + chirps_minute ) / 4;
    cout << "temperature: " << temperature << " Celicius" << endl;
}