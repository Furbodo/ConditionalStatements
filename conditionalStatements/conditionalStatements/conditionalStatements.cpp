// conditionalStatements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	short earnedPTS; // points the student earned this semester
	char letterGrade;
	cout << setprecision(4) << fixed << showpoint; // output flags, stole this from last project too :)
	cout << "How many points did the student earn this semester?: "; cin >> earnedPTS; cout << endl;

	if (earnedPTS >= 951 && earnedPTS <= 1100) {
		letterGrade = 65;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}

	if else(earnedPTS >= 951 && earnedPTS <= 1100) {
		letterGrade = 65;
		cout << "The student earned a letter grade of " << letterGrade << endl;
	}
}