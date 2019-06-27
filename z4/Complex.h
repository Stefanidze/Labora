#pragma once
#include "Numbers.h"

using namespace std;

class Complex : public AbstNumbers {
public:
	float first, second;
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
};

class ComplexFactory : public AbstFactory {
public:
	ComplexFactory() : AbstFactory(2) { }

	AbstNumbers* Create(int key) {
		if (key == mark)
			return new Complex;
		else
			return nullptr;
	}
};