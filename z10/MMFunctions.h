#pragma once
#include "MultiMethod.h"

class Multimethod_Fr_Fr : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Fr_Fr() {};
};

class Multimethod_Fr_Fr_Factory : public MultiMethodFactory {
public:
	Multimethod_Fr_Fr_Factory() :MultiMethodFactory(1, 1) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Fr_Fr;
		else
			return nullptr;
	}
};

class Multimethod_Fr_Cpx : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Fr_Cpx() {};
};

class Multimethod_Fr_Cpx_Factory : public MultiMethodFactory {
public:
	Multimethod_Fr_Cpx_Factory() :MultiMethodFactory(1, 2) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Fr_Cpx;
		else
			return nullptr;
	}
};

class Multimethod_Cpx_Fr : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Cpx_Fr() {};
};

class Multimethod_Cpx_Fr_Factory : public MultiMethodFactory {
public:
	Multimethod_Cpx_Fr_Factory() :MultiMethodFactory(2, 1) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Cpx_Fr;
		else
			return nullptr;
	}
};

class Multimethod_Cpx_Cpx : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Cpx_Cpx() {};
};

class Multimethod_Cpx_Cpx_Factory : public MultiMethodFactory {
public:
	Multimethod_Cpx_Cpx_Factory() :MultiMethodFactory(2, 2) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Cpx_Cpx;
		else
			return nullptr;
	}
};