#include "Foreman.h"

void Foreman::setter()
{
	Labor::setter();
	cout << "ENTER PAYMENT IN Rs." << endl;
	cin >> payment;
}

void Foreman::getter() const
{
	Labor::getter();
	cout << "PAYMENT IS: " << payment << endl;
	cout << "----------------------------------" << endl;
}
