#pragma once
#include "Numbers.h"
#include <string>

using namespace std;

class NameDecorator : public AbstNumbers {
public:
	string name;
	AbstNumbers *parent;

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	NameDecorator() {};
};

class NameDecoratorFactory : public AbstFactory {
public:
	NameDecoratorFactory() : AbstFactory(3) { }

	AbstNumbers* Create(int key) {
		if (key == mark)
			return new NameDecorator;
		else
			return nullptr;
	}
};