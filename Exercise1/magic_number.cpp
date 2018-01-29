#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "Enter a three digit number whole first digit is greater than the last digit: ";
    cin >> num;

    int reverse1 = 0;
    int count = 1;
    int temp = num;
    while(temp)
    {
        reverse1 += (temp % 10) * (100 / count);
        temp /= 10;
        count *= 10;
    }

    int subtract = num - reverse1;

    int temp2 = subtract;
    int reverse2 = 0;
    int count2 = 1;
    while(temp2)
    {
        reverse2 += ( temp2 % 10 ) * (100 / count2);
        temp2 /= 10;
        count2 *= 10;
    }

    int add = reverse2 + subtract;

    cout << "reverse1: " << reverse1 << endl;
    cout << "subtract: " << subtract << endl;

    cout << "reverse2: " << reverse2 << endl;
    cout << "add: " << add << endl;
}