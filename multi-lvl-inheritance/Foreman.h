#pragma once
#include "Labor.h"
class Foreman :
	public Labor
{
private:
	float payment;
public:
	void setter();
	void getter() const;
};

