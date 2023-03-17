#pragma once
#include <iostream>
#include "IObserver.h"

using namespace std;

class ISubject
{
public:
	virtual ~ISubject() {};
	virtual void attach(IObserver* obs) = 0;
	virtual void detach() = 0;
	virtual void notify() = 0;
};

