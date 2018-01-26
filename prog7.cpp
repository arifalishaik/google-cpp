// How many ways can you arrange 6 different books, left to right, on a shelf? 

#include <iostream>
using namespace std;

int main(void)
{
    int num_books;
    cout << "Please Enter number of books: ";
    cin >> num_books;
    int ways = 1;

    for ( int i = num_books; i > 0; --i )
    {
        ways *= i;
    }

    cout << "No. of ways can you arrange 6 different books, left to right: " << ways << endl;
}