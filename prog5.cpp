#include <iostream>
using namespace std;
int gcd(int num1, int num2);

int main(void)
{
    int num1, num2;
    cout << "Enter two numbers:";
    cin >> num1;
    cin >> num2;

    cout << "gcd = ";
    cout << gcd(num1, num2) << endl;
    return 0;
}

int gcd( int a, int b )
{
    int temp;
    
    while( b!= 0 )
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}