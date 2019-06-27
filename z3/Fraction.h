#pragma once
#include "Numbers.h"


namespace simple_container {
	class Fraction : public AbstNumbers {
	public:
		int first, second;

		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
	};
}