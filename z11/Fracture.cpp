#include "Fracture.h"

void Fracture::InData(ifstream &ifst) {
	ifst >> first >> second;
}

void Fracture::Out(ofstream &ofst) {
	ofst << "It is Fracture: first = " << first << ", second = " << second <<  endl;
}

namespace {
	FractureFactory ff;
}
