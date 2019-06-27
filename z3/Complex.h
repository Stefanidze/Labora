#pragma once
#include "Numbers.h"

namespace simple_container {
	class Complex : public AbstNumbers {
	public:
		float real, imaginary;

		Complex() {};
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
	};
}