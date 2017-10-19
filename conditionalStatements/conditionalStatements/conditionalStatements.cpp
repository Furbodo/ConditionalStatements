// conditionalStatements.cpp : Defines the entry point for the console application.
// Justin Balogh Oct 18 2017
// 


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	short earnedPTS; // points the student earned this semester
	char letterGrade; // assigned value for letter grade
	cout << setprecision(4) << fixed << showpoint; // output flags, stole this from last project too :)
	cout << "How many points did the student earn this semester?: "; cin >> earnedPTS; cout << endl;

	if (earnedPTS >= 951 && earnedPTS <= 1100) {
		letterGrade = 65; // A
	}
	else if (earnedPTS >= 801 && earnedPTS <= 950) {
		letterGrade = 66; // B
	}
	else if(earnedPTS >= 651 && earnedPTS <= 800) {
		letterGrade = 67; // C		
	}
	else if(earnedPTS >= 501 && earnedPTS <= 650) {
		letterGrade = 68; // D
	}
	else if (earnedPTS >= 0 && earnedPTS <= 500) {
		letterGrade = 70; // F
	}
	else {
		letterGrade = 0; // Incase we get a number outside the range, we still have to assign a value to letterGrade the way this is written

	}

	switch (letterGrade)
	{
		case 65: 
			cout << "The student earned a letter grade of " << letterGrade << endl;
			break;
		case 66:
			cout << "The student earned a letter grade of " << letterGrade << endl;
			break;
		case 67:
			cout << "The student earned a letter grade of " << letterGrade << endl;
			break;
		case 68:
			cout << "The student earned a letter grade of " << letterGrade << endl;
			break;
		case 70:
			cout << "The student earned a letter grade of " << letterGrade << endl;
			break;
		default:
			cout << "Oops looks like you entered a number outside the range." << endl;
				// If you were to enter a negative number or a number larger than 1100
	}
	



}