#include <iostream>
#include <string>
using namespace std;

int get_date(char letter);
string get_months(string code);
int get_year(string date);

int get_date(char letter)
{
    int count = -1;
    for ( char i = 'Q'; i <= letter; ++i )
    {
        ++count;
    }
    return count;
}

string get_months(string code)
{
    char letter = code[0];

    switch(letter)
    {
        case 65:
        return "January";
        break;
        case 66:
        return "February";
        break;
        case 67:
        return "March";
        break;
        case 68:
        return "April";
        break;
        case 69:
        return "May";
        break;
        case 70:
        return "June";
        break;
        case 71:
        return "July";
        break;
        case 72:
        return "August";
        break;
        case 73:
        return "September";
        break;
        case 74:
        return "October";
        break;
        case 75:
        return "November";
        break;
        case 76:
        return "December";
        break;
        default:
        return "Enter the range of month between A to L";
        break;
    }
}

int get_year(string date){
    char year = date[3];
    int count = 0;
    for ( char i = 'A'; i <= year; ++i )
    {
        ++count;
    }
    return count + 1995;
}

// main function
int main(void)
{
    string code;
    cout << "Enter the date of expiry: ";
    cin >> code;

    string month = get_months(code);
    int date = get_date( code[1] ) * 10  + get_date( code[2] );
    int year = get_year(code);
    cout << date << " " << month << " " << year << endl;
}
