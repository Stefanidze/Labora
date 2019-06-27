#include "Complex.h"

namespace simple_container {
	void Complex::InData(ifstream &ifst) {
		ifst >> real >> imaginary;
	}

	void Complex::Out(ofstream &ofst) {
		ofst << "This is a complex number: " << real << " " << imaginary << "\n";
	}
}