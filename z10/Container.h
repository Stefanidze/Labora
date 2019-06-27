#pragma once
#include "Numbers.h"

struct Node {
public:
	Node *next;
	AbstNumbers *data;
};

class List {
public:
	int len;
	Node *head, *tail;
	void In(ifstream &ifst);
	void Out(ofstream &ofst);
	void Clear();
	List();
	~List() { Clear(); }
};