#include "Complex.h"

void Complex::InData(ifstream &ifst) {
	ifst >> first >> second;
}

void Complex::Out(ofstream &ofst) {
	ofst << "It is Complex: first = " << first << ", second = " << second << endl;
}

namespace {
	ComplexFactory cf;
}
