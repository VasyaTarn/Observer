#pragma once
#include "Left.h"

class Button3 : public IObserver
{
private:
	Left& leftBtn;
	bool state;
public:
	Button3(Left& leftBtn) :
		leftBtn(leftBtn)
	{
		state = false;
		this->leftBtn.attach(this);
	}

	void move(const string direction) override
	{
		state = true;
		cout << "Button 3 moves " << direction << endl;
	}
};

