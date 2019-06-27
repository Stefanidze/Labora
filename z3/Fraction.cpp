#include "Fraction.h"

namespace simple_container {

	void Fraction::InData(ifstream &ifst) {
		ifst >> first >> second;
	}

	void Fraction::Out(ofstream &ofst) {
		ofst << "This is a fraction: " << first << " " << second << "\n";
	}

}