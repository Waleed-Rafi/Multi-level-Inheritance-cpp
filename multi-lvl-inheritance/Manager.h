#pragma once
#include "Employee.h"
class Manager :
	public Employee
{
private:
	string title;
	float clubdues;
public:
	void setter();
	void getter() const;
};

