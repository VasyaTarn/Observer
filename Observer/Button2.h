#pragma once
#include "Down.h"

class Button2 : public IObserver
{
private:
	Down& downBtn;
	bool state;
public:
	Button2(Down& downBtn) :
		downBtn(downBtn)
	{
		state = false;
		this->downBtn.attach(this);
	}

	void move(const string direction) override
	{
		state = true;
		cout << "Button 2 moves " << direction << endl;
	}
};

