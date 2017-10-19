// conditionalStatements.cpp : Defines the entry point for the console application.
// Justin Balogh Oct 18 2017
// 


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int caseTester = 1; // for the switch
	short earnedPTS; // points the student earned this semester
	char letterGrade; // assigned value for letter grade
	cout << setprecision(4) << fixed << showpoint; // output flags, stole this from last project too :)
	cout << "How many points did the student earn this semester?: "; cin >> earnedPTS; cout << endl;
		// if statements
	if (earnedPTS >= 951 && earnedPTS <= 1100) {
		letterGrade = 65; // A
		caseTester = 1;
	}
	else if (earnedPTS >= 801 && earnedPTS <= 950) {
		letterGrade = 66; // B
		caseTester = 1;
	}
	else if(earnedPTS >= 651 && earnedPTS <= 800) {
		letterGrade = 67; // C
		caseTester = 1;
	}
	else if(earnedPTS >= 501 && earnedPTS <= 650) {
		letterGrade = 68; // D
		caseTester = 1;
	}
	else if (earnedPTS >= 0 && earnedPTS <= 500) {
		letterGrade = 70; // F
		caseTester = 1;
	}
	else {
		caseTester = 0;
	}
		// conditional statement
	letterGrade = (earnedPTS > 1100 || earnedPTS < 0) ? 0 : letterGrade;
		// checks if the earnedPTS was outside the grading range of 0-1100
		// switch statement
	switch (caseTester) // This switch statement tests for the case of either earnedPTS is too large or not
	{
		case 1: 
			cout << "The student earned a letter grade of " << letterGrade << endl; // output for the grade
			break;
		default:
			cout << "Oops looks like you entered a number outside the range." << endl;
				// If you were to enter a negative number or a number larger than 1100
	}
}