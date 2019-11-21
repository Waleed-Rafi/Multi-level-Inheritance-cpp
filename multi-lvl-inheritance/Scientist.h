#pragma once
#include "Employee.h"
class Scientist :
	public Employee
{
private:
	string field;
	int noOfPublications;
public:
	void setter();
	void getter() const;
};

