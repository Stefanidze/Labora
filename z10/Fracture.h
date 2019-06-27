#pragma once
#include "Numbers.h"

using namespace std;

class Fracture : virtual public AbstNumbers {
public:
	int first, second;
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
};

class FractureFactory : public AbstFactory {
public:
	FractureFactory() : AbstFactory(1) { }

	AbstNumbers* Create(int key) {
		if (key == mark)
			return new Fracture;
		else
			return nullptr;
	}
};