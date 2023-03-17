#pragma once
#include "Right.h"

class Button4 : public IObserver
{
private:
	Right& rightBtn;
	bool state;
public:
	Button4(Right& rightBtn) :
		rightBtn(rightBtn)
	{
		state = false;
		this->rightBtn.attach(this);
	}

	void move(const string direction) override
	{
		state = true;
		cout << "Button 4 moves " << direction << endl;
	}
};

