#pragma once
#include "Employee.h"
class Labor :
	public Employee
{
protected:
	string shift;
	float noOfHours;
public:
	void setter();
	void getter() const;
};