#include <iostream>
using namespace std;

// accelerates the speed
// parameter speed is passed by reference and amount is passed by value
// A local copy of value parameter is made unlike speed parameter
void accelerate(double &speed, int amount)
{
    speed = speed + amount;
    amount = amount + 20;
}

// main function
int main(void)
{
    double current_speed = 30.5;
    int accel_amount;

    cout << "Current Speed: " << current_speed;
    cout << "Acclerate by how much: ";
    cin >> accel_amount;

    // you can directly pass address of a variable like below
    accelerate(current_speed, accel_amount);
    cout << "accelerated speed: " << current_speed << endl;
    cout << "amount remains unchanged: " << accel_amount << endl;
}

