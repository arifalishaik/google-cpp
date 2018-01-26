#include <iostream>
using namespace std;
int GetInput(int weekly_sales);
void CalcMethod1(int weekly_sales);
void CalcMethod2(int weekly_sales);
void CalcMethod3(int weekly_sales);

// A function to get the weekly sales of units
int GetInput() {
  int units;
  cout << "Enter number of units sold per week: ";
  if (!(cin >> units)) {
    cout << "Numbers only" << endl;
    return 0;
  } else {
    return units;
  }
}

void CalcMethod1(int weekly_sales){
    int weekly_pay = 600;
    cout << "Option1 Earnings of a week: " << weekly_pay << endl; 
}

void CalcMethod2(int weekly_sales){
    int hourly_pay = 7;
    int weekly_pay = 7 * 40;
    int weekly_commission = weekly_sales * 0.10;
    int total_weeklyEarnings = weekly_pay + weekly_commission;
    cout << "Option2 Earnings of a week: " << total_weeklyEarnings << endl;
}

void CalcMethod3(int weekly_sales){
    int weekly_pay = weekly_sales * 20;
    int weekly_commission = weekly_sales * 0.20;
    int total_weeklyEarnings = weekly_pay + weekly_commission;
    cout << "Option3 Earnings of a week: " << total_weeklyEarnings << endl;
}

// main function
int main(void)
{
  int cost_shoe = 225;
  int weekly_sales = GetInput();
  if (weekly_sales == 0){
    return 0;
  }

  CalcMethod1(weekly_sales);
  CalcMethod2(weekly_sales);
  CalcMethod3(weekly_sales); 
}