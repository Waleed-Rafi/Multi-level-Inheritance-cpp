#include "Manager.h"

void Manager::setter()
{
	Employee::setter();
	cout << "ENTER THE TITLE OF THE MANAGER" << endl;
	getline(cin,title);
	cout << "ENTER THE CLUBDUES OF MANAGER" << endl;
	cin >> clubdues;
}

void Manager::getter() const
{
	Employee::getter();
	cout << "TITLE IS: " << title << endl;
	cout << "CLUB DUES ARE: " << clubdues << endl;
	cout << "----------------------------------" << endl;
}
