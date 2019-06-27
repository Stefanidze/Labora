#pragma once
#include "MultiMethod.h"


class Multimethod_Plr_Plr : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Plr_Plr() {};
};

class Multimethod_Plr_Plr_Factory : public MultiMethodFactory {
public:
	Multimethod_Plr_Plr_Factory() :MultiMethodFactory(3, 3) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Plr_Plr;
		else
			return nullptr;
	}
};


class Multimethod_Plr_Fr : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Plr_Fr() {};
};

class Multimethod_Plr_Fr_Factory : public MultiMethodFactory {
public:
	Multimethod_Plr_Fr_Factory() :MultiMethodFactory(3, 1) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Plr_Fr;
		else
			return nullptr;
	}
};

class Multimethod_Plr_Cpx : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Plr_Cpx() {};
};

class Multimethod_Plr_Cpx_Factory : public MultiMethodFactory {
public:
	Multimethod_Plr_Cpx_Factory() :MultiMethodFactory(3, 2) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Plr_Cpx;
		else
			return nullptr;
	}
};

class Multimethod_Fr_Plr : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Fr_Plr() {};
};

class Multimethod_Fr_Plr_Factory : public MultiMethodFactory {
public:
	Multimethod_Fr_Plr_Factory() :MultiMethodFactory(1, 3) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Fr_Plr;
		else
			return nullptr;
	}
};

class Multimethod_Cpx_Plr : public MultiMethod {
public:
	void Multimethod_body(ofstream &ofst);
	Multimethod_Cpx_Plr() {};
};

class Multimethod_Cpx_Plr_Factory : public MultiMethodFactory {
public:
	Multimethod_Cpx_Plr_Factory() :MultiMethodFactory(2, 3) { }

	MultiMethod* Create(int key_one, int key_two) {
		if (key_one == multimethod_type_one && key_two == multimethod_type_two)
			return new Multimethod_Cpx_Plr;
		else
			return nullptr;
	}
};