#include "Numbers.h"
#include "Complex.h"
#include "Fracture.h"
#include "Container.h"

double Parameter(AbstNumbers* a) {
	Complex* c = nullptr;
	Fracture* f = nullptr;

	if ((c = dynamic_cast<Complex*>(a)) != nullptr) {
		return sqrt(pow(c->first, 2) + pow(c->second, 2));
	}
	else if ((f = dynamic_cast<Fracture*>(a)) != nullptr) {
		float param = (float)f->first / (float)f->second;
		return param;
	}
	else {
		return 0.0;
	}
}

void OutParam(List* lst, ofstream &ofst) {
	Node *ptr = lst->head;
	for (int i = 0; i < lst->len; i++, ptr = ptr->next) {
		ofst << i << ": Parameter = " << Parameter(ptr->data) << endl;
	}
}
