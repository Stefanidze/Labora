#include "Numbers.h"

AbstFactory *AbstFactory::top = nullptr;

AbstFactory::AbstFactory(int m) : mark(m) {
	this->next = top;
	top = this;
}

AbstNumbers* AbstFactory::Make(int key) {

	AbstNumbers* f = nullptr;
	AbstFactory* tmp = top;

	while (tmp) {
		f = tmp->Create(key);
		if (f) {
			f->mark = key;
			return f;
		}
		tmp = tmp->next;
	}
	return nullptr;

}

AbstNumbers* AbstFactory::In(ifstream &ifst) {

	AbstNumbers *ptr = nullptr;
	int k;
	ifst >> k;
	ptr = Make(k);
	if (ptr)
		ptr->InData(ifst);
	return ptr;

}
