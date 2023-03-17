#pragma once
#include "ISubject.h"

class Right : public ISubject
{
private:
	IObserver* obs;
	string direction;
public:
	Right()
	{
		direction = "Right";
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

