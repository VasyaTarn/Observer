#pragma once
#include "ISubject.h"

class Left : public ISubject
{
private:
	IObserver* obs;
	string direction;
public:
	Left()
	{
		direction = "Left";
	}

	void attach(IObserver* obs) override
	{
		this->obs = obs;
	}
	void detach() override
	{
		this->obs = nullptr;
	}
	void notify() override
	{
		obs->move(direction);
	}
};

