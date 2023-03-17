#pragma once
#include "Up.h"

class Button1 : public IObserver
{
private:
	Up& upBtn;
	bool state;
public:
	Button1(Up& upBtn) :
		upBtn(upBtn)
	{
		state = false;
		this->upBtn.attach(this);
	}

	void move(const string direction) override
	{
		state = true;
		cout << "Button 1 moves " << direction << endl;
	}

};

