#include <iostream>
using namespace std;

// calculating the average of four assignments
int get_assignment_percentage( double assignment_1, double assignment_2, double assignment_3, double assignment_4 )
{
    double average = ( assignment_1 + assignment_2 + assignment_3 + assignment_4 ) / 4;
    double assignment = average * 0.40;
    return assignment;
}

// calculatig the final grade
int get_grade(double assignment, double midterm, double final_exam, double class_part)
{
    double final_grade = assignment + midterm + final_exam + class_part;
    cout << "The final Grade: " << final_grade << endl;
}

// main function
int main(void)
{
    double assignment,assignment_1,assignment_2,assignment_3,assignment_4;
    double midterm;
    double final_exam;
    double class_part;

    // input assignment marks
    cout << "please enter the assignment marks:" << endl;
    cout << "Assignment 1:"; cin >> assignment_1;
    cout << "Assignment 2:"; cin >> assignment_2;
    cout << "Assignment 3:"; cin >> assignment_3;
    cout << "Assignment 4:"; cin >> assignment_4;

    // input midterm marks
    cout << "Enter the score for the midterm: "; cin >> midterm;
    midterm *= 0.15;

    // input final_exam marks
    cout << "Enter the score for the final: "; cin >> final_exam;
    final_exam *= 0.35;

    // input clas participation marks
    cout << "Enter the score for the class participation: "; cin >> class_part;
    class_part *= 0.10;

    // getting the percentage of four assignments
    assignment = get_assignment_percentage( assignment_1, assignment_2, assignment_3, assignment_4 );
    // printing the final grade of the candidate
    get_grade(assignment, midterm, final_exam, class_part);
}

