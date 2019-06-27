#include "Container.h"
#include <iostream>

namespace simple_container {
	void List::In(ifstream &ifst) {
		while (!ifst.eof()) {
			try {
				Node *nd = new Node();
				nd->data = AbstNumbers::In(ifst);
				if (len == 0) {
					head = nd;
					tail = nd;
				}
				else {
					tail->next = nd;
				}
				tail = nd;
				len++;
			}
			catch (exception e) {
				cerr << "exception: " << e.what() << endl;
			}
		}
	}

	void List::Out(ofstream &ofst) {
		Node *ptr = head;
		ofst << "Container contains " << len << " elements." << endl;
		for (int i = 0; i < len; i++, ptr = ptr->next) {
			ofst << i + 1 << ": ";
			ptr->data->Out(ofst);
		}
	}

	List::List() : len(0) {}

	List::~List() {}
}