#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
protected:
	int eno;
	string ename;
	string cnic;
public:
	void setter();
	void getter() const;
};

