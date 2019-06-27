#include "Polar.h"

void Polar::InData(ifstream &ifst) {
	ifst >> angle >> distance;
}

void Polar::Out(ofstream &ofst) {
	ofst << "It is Polar: angle = " << angle << ", distance = " << distance << endl;
}

namespace {
	PolarFactory pf;
}
