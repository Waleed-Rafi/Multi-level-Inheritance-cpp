#include "Employee.h"

void Employee::setter()
{
	cout << "ENTER THE ENUMBER OF EMPLOYEE: " << endl;
	cin >> eno;
	cout << "ENTER THE ENAME OF EMPLOYEE: " << endl;
	cin.ignore(10, '\n');
	getline(cin,ename);
	cout << "ENTER THE CNIC OF EMPLOYEE: " << endl;
	getline(cin,cnic);
}

void Employee::getter() const
{
	cout << "-------------- DATA ---------------" << endl;
	cout << "ENUMBER IS: " << eno << endl;
	cout << "ENAME IS: " << ename << endl;
	cout << "CNIC IS: " << cnic << endl;
}
