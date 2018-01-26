#include <iostream>
using namespace std;

int main(void)
{
    int input_var;

    do{
        if( !( cin >> input_var ) )
        {
            cin.clear();
            cin.ignore(10000,'\n');
        }

        if( input_var != -1 )
        {
            cout << "You Entered:" << input_var << endl;
        }

    }while( input_var != -1 );

    cout << "All Done.." << endl;
    return 0;
}