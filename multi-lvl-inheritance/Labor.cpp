#include "Labor.h"

void Labor::setter()
{
	Employee::setter();
	cout << "ENTER THE SHIFT OF LABOR: " << endl;
	getline(cin,shift);
	cout << "ENTER THE NUMBER OF HOURS WORKED BY THE LABOR" << endl;
	cin >> noOfHours;
}

void Labor::getter() const
{
	Employee::getter();
	cout << "SHIFT IS: " << shift << endl;
	cout << "NO. OF HOURS WORKED: " << noOfHours << endl;
	cout << "--------------------------------------" << endl;
}
