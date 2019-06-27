#pragma once
#include "Numbers.h"

using namespace std;

class Polar : public AbstNumbers {
public:
	float angle;
	int distance;
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
};

class PolarFactory : public AbstFactory {
public:
	PolarFactory() : AbstFactory(3) { }

	AbstNumbers* Create(int key) {
		if (key == mark)
			return new Polar;
		else
			return nullptr;
	}
};