#pragma once
#include <iostream>

using namespace std;

class IObserver
{
public:
	virtual ~IObserver() {};
	virtual void move(const string direction) = 0;
};

