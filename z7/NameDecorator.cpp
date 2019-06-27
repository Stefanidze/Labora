#include "NameDecorator.h"

void NameDecorator::InData(ifstream &ifst) {
	ifst >> name;
	int kt;
	parent = NULL;
	ifst >> kt;
	AbstFactory* tmp = AbstFactory::top;
	while (tmp) {
		parent = tmp->Create(kt);
		if (parent) {
			parent->InData(ifst);
			return;
		}
		tmp = tmp->next;
	}

}

void NameDecorator::Out(ofstream &ofst) {
	parent->Out(ofst);
	ofst << "Type: " << name << endl;
}

namespace
{
	NameDecoratorFactory ndf;
}
