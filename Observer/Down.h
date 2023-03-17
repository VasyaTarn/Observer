#pragma once
#include "ISubject.h"

class Down : public ISubject
{
private:
	IObserver* obs;
	string direction;
public:
	Down()
	{
		direction = "Down";
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

