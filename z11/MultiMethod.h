#pragma once

#include <fstream>
#include "Container.h"

using namespace std;

class MultiMethod
{
public:
	int is_first = 0;
	virtual void Multimethod_body(ofstream &ofst) = 0;
};

class MultiMethodFactory
{
protected:
public:
	int multimethod_type_one;
	int multimethod_type_two;
	static MultiMethodFactory* top;
	MultiMethodFactory* next;
	MultiMethodFactory(int one, int two);
	static MultiMethod* Multimethod_choose(ofstream &ofst, AbstNumbers* elem_one, AbstNumbers* elem_two);
	virtual MultiMethod* Create(int key_one, int key_two) = 0;
};
