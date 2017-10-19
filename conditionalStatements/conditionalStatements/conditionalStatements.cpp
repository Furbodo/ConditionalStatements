// conditionalStatements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	short earnedPTS; // points the student earned this semester
	char letterGrade; // 
	cout << setprecision(4) << fixed << showpoint; // output flags, stole this from last project too :)
	cout << "How many points did the student earn this semester?: "; cin >> earnedPTS; cout << endl;

	if (earnedPTS >= 951 && earnedPTS <= 1100) {
		letterGrade = 65;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}
	else if(earnedPTS >= 801 && earnedPTS <= 950) {
		letterGrade = 66;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}
	else if(earnedPTS >= 651 && earnedPTS <= 800) {
		letterGrade = 67;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}
	else if(earnedPTS >= 501 && earnedPTS <= 650) {
		letterGrade = 68;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}
	else if(earnedPTS >= 0 && earnedPTS <= 500) {
		letterGrade = 70;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}
	else {
		cout << "Oops looks like you entered a number outside the range." << endl;
	}
}