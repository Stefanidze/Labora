#pragma once
#include "Numbers.h"

namespace simple_container {
	struct Node {
		Node *next;
		AbstNumbers *data;
	};

	class List {
	public:
		Node *head, *tail;
		int len;
		void In(ifstream &ifst);
		void Out(ofstream &ofst);
		List();
		~List();
	};
}