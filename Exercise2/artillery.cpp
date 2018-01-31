#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;

// declaring constants
const int kNumShells = 10;  // allowed 10 shells per target
const int kMinDist = 200;  // min distance for a target
const int kMaxDist = 900;  // max distance for a target
const double kVelocity = 200.0;  // initial velocity of 200 ft/sec
const double kGravity = 32.2;  // gravity for distance calculation
const double kPi = 3.1415;


int kills = 0;

double enemy_distance()
{
    srand (time(NULL));
    double enemy_distance = rand() % kMaxDist + kMinDist;
    return enemy_distance;
}

double get_FiredDistance()
{
    double angle;
    cout << "What's Angle ?: ";
    cin >> angle;
    angle = (angle * kPi) / 180.0;

    double time_in_air = ( 2.0 * kVelocity * sin(angle) ) / kGravity;
    double fired_distance = round( (kVelocity * cos(angle)) * time_in_air );
    return fired_distance;
}

int fire()
{
    double distance = enemy_distance();
    cout << "The enemy is " << distance << " feet away" << endl;

    int shots = kNumShells;
    double fired_distance;

    do{

        fired_distance = get_FiredDistance();

        if( shots == 0 )
        {
            cout << "You are out of ammunation: " << endl;
            exit(0);
        }
        else if ( fired_distance == distance )
        {
            cout << "You hit him!!!" << endl;
            ++kills;
        }
        else if( fired_distance < distance )
        {
            cout << "You Undershot by: " << ( distance - fired_distance ) << "feets" << endl;
        }
        else if( fired_distance > distance )
        {
            cout << "You Overshot by: " << (fired_distance - distance) << "feets" << endl;            
        }

        --shots;
        
    }while( fired_distance != distance );

    cout << "It took you:" << (kNumShells - shots) << "shots" << endl;
    cout << "You have killed:" << kills << " Ennemy" << endl;

    return kills;
}

void startup()
{
    cout << "Welcome to the artillery: " << endl;
    cout <<     "You are in the middle of a war and being charged by thousands of enemies." << endl <<
                "You have one cannon, which you can shoot at any angle." << endl <<
                "You only have 10 cannonballs for this target.. " << endl <<
                "Let's begin..." << endl;
}


// main function
int main(void)
{
    startup();
    int killed = 0;
    char done;
    
    do {
        killed = fire(); // Fire() contains the main loop of each round
        cout << "I see another one, care to shoot again? (Y/N) " << endl;
        cin >> done;
    } while (done != 'n');

    cout << "You killed " << killed << " of the enemy." << endl;
}



