#include "Numbers.h"
#include "Fraction.h"
#include "Complex.h"

namespace simple_container {
	AbstNumbers* AbstNumbers::In(ifstream &ifst) {
		AbstNumbers *a;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			a = new Complex;
			break;
		case 2:
			a = new Fraction;
			break;
		default:
			throw invalid_argument("read an invalid string from the file!");
		}
		a->InData(ifst);
		return a;
	}
}