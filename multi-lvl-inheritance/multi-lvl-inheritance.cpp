#include "Employee.h"
#include "Manager.h"
#include "Scientist.h"
#include "Labor.h"
#include "Foreman.h"

int main() {
	system("color 3F");
	Manager m1;
	Scientist s1;
	Labor l1;
	Foreman f1;
	int choice=0;
	while (choice != 5) {
		cout << "\n\t\t\t------------------------- MENU ------------------------\n" << endl;
		cout << "ENTER 1 TO SET AND GET MANAGER INFORMATION" << endl;
		cout << "ENTER 2 TO SET AND GET SCIENTIST INFORMATION" << endl;
		cout << "ENTER 3 TO SET AND GET LABOR INFORMATION" << endl;
		cout << "ENTER 4 TO SET AND GET FOREMAN INFORMATION" << endl;
		cout << "ENTER 5 TO EXIT" << endl;
		cout << "\n\t\t\t-------------------------------------------------------" << endl;
		cout << "ENTER YOUR CHOICE" << endl;
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1:
			system("color 6F");
			m1.setter();
			m1.getter();
			break;
		case 2:
			system("color 2F");
			s1.setter();
			s1.getter();
			break;
		case 3:
			system("color 1F");
			l1.setter();
			l1.getter();
			break;
		case 4:
			system("color F3");
			f1.setter();
			f1.getter();
			break;
		default:
			system("color 4F");
			cout << "INVALID CHOICE!!!" << endl;
		}
	}
	system("pause");
	return 0;
}