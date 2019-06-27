#include "PolarMM.h"

void Multimethod_Plr_Plr::Multimethod_body(ofstream &ofst) {
	ofst << "This pair is Polar with Polar" << endl;
}

namespace {
	Multimethod_Plr_Plr_Factory mpp;
}

void Multimethod_Plr_Fr::Multimethod_body(ofstream &ofst) {
	ofst << "This pair is Polar with Fractured" << endl;
}

namespace {
	Multimethod_Plr_Fr_Factory mpf;
}

void Multimethod_Plr_Cpx::Multimethod_body(ofstream &ofst) {
	ofst << "This pair is Polar with Complex" << endl;
}

namespace {
	Multimethod_Plr_Cpx_Factory mpc;
}


void Multimethod_Fr_Plr::Multimethod_body(ofstream &ofst) {
	ofst << "This pair is Fractured with Polar" << endl;
}

namespace {
	Multimethod_Fr_Plr_Factory mfp;
}

void Multimethod_Cpx_Plr::Multimethod_body(ofstream &ofst) {
	ofst << "This pair is Complex with Polar" << endl;
}

namespace {
	Multimethod_Cpx_Plr_Factory mcp;
}