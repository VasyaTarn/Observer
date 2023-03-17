#pragma once
#include "ISubject.h"

class Up : public ISubject
{
private:
	IObserver* obs;
	string direction;
public:
	Up()
	{
		direction = "Up";
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

