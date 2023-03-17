#pragma once
#include <iostream>
#include "Button1.h"
#include "Button2.h"
#include "Button3.h"
#include "Button4.h"

using namespace std;

class Client
{
public:
	void clientCode()
	{
		Up* up = new Up();
		Button1* btn1 = new Button1(*up);

		Down* down = new Down();
		Button2* btn2 = new Button2(*down);

		Left* left = new Left();
		Button3* btn3 = new Button3(*left);

		Right* right = new Right();
		Button4* btn4 = new Button4(*right);

		up->notify();
		down->notify();
		left->notify();
		right->notify();

		delete up;
		delete btn1;

		delete down;
		delete btn2;

		delete left;
		delete btn3;

		delete right;
		delete btn4;
	}
};

