#include "MMFunctions.h"

void Multimethod_Fr_Fr::Multimethod_body(ofstream &ofst)
{
	ofst << "This pair is Fractured with Fractured" << endl;
}

namespace
{
	Multimethod_Fr_Fr_Factory mff;
}

void Multimethod_Fr_Cpx::Multimethod_body(ofstream &ofst)
{
	ofst << "This pair is Fractured with Complex" << endl;
}

namespace
{
	Multimethod_Fr_Cpx_Factory mfc;
}

void Multimethod_Cpx_Fr::Multimethod_body(ofstream &ofst)
{
	ofst << "This pair is Complex with Fractured" << endl;
}

namespace
{
	Multimethod_Cpx_Fr_Factory mcf;
}

void Multimethod_Cpx_Cpx::Multimethod_body(ofstream &ofst)
{
	ofst << "This pair is Complex with Complex" << endl;
}

namespace
{
	Multimethod_Cpx_Cpx_Factory mcc;
}
