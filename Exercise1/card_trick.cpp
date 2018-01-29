#include <iostream>
using namespace std;
int get_ABC(int num);
int get_BCA(int num);
int get_CAB(int num);
int check_XY(int xy );
int check_YZ( int yz );    
int check_ZX( int zx );

int get_ABC(int num)
{
    int value = num % 11;
    return value;
}

int get_BCA(int num)
{
    int x = num / 10;
    int y = num % 10;
    int z = x / 10;
    int B = x % 10;
    int BC = ( B * 10 ) + y;
    int BCA = (BC * 10) + z;

    // cout << BCA << endl;
    return BCA % 11;
}

int get_CAB(int num)
{
    int temp = num % 10;
    temp = ( temp * 100 ) + ( num / 10 );

    return temp % 11;
}


int check_XY(int xy){
    if ( xy & 1 )
    {
        if ( (xy += 11) < 20 )
        {
            xy += 11;
        }
        else if( (xy -= 11) < 20 )
        {
            xy -= 11;
        }

        if( xy == 9 )
        {
            cout << "Sum is 9: breaking out:" << endl;
        }
        return xy;
    }
    else
    {
        return xy;
    }
}


int check_YZ(int yz){
    if ( yz & 1 )
    {
        if ( (yz += 11) < 20 )
        {
            yz += 11;
        }
        else if( (yz -= 11) < 20 )
        {
            yz -= 11;
        }

        if( yz == 9 )
        {
            cout << "Sum is 9: breaking out:" << endl;
        }

        return yz;
    }else{
        return yz;
    }
}


int check_ZX(int zx){
    if ( zx & 1 )
    {
        if ( (zx += 11) < 20 )
        {
            zx += 11;
        }
        else if( (zx -= 11) < 20 )
        {
            zx -= 11;
        }

        if( zx == 9 )
        {
            cout << "Sum is 9: breaking out:" << endl;
        }

        return zx;
    }else{
        return zx;
    }
}


// main function
int main(void){
    int num;
    cout << "Enter three digit number: ";
    cin >> num;

    int x = get_ABC(num);
    int y = get_BCA(num);
    int z = get_CAB(num);

    int xy = x+y;
    int yz = y+z;
    int zx = z+x;

    xy = check_XY( xy );
    yz = check_YZ( yz );    
    zx = check_ZX( zx );

    xy /= 2;
    yz /= 2;
    zx /= 2;

    cout << "x = " << xy << endl;
    cout << "y = " << yz << endl;
    cout << "z = " << zx << endl;
}

