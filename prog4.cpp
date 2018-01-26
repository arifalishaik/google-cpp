#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(void)
{
    srand ( time(NULL) );
    int val1 = rand() % 100;
    // cout << val1 << endl;

    cout << "Guess the random number ( 0 to  99 )" << endl;
    int guessed_number;

    do {
        cin >> guessed_number;

        if( guessed_number > val1 )
        {
            cout << " Lower Please " << endl;
        }
        else if( guessed_number < val1)
        {
            cout << " Higher Please " << endl;
        }
        else
        {
            cout << "Congratulations" << endl;
        }
    }while( guessed_number != val1 );

return 0;
}