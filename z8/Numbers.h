#pragma once
#include <fstream>

using namespace std;

class AbstNumbers {
public:
	virtual void InData(ifstream &ifst) = 0;
	virtual void Out(ofstream &ofst) = 0;
	virtual ~AbstNumbers() {}
	int mark;
};

class AbstFactory {
public:
	AbstFactory(int m);
	static AbstNumbers* Make(int key);
	static AbstNumbers* In(ifstream &ifst);
	virtual AbstNumbers* Create(int key) = 0;
	static AbstFactory* top;
	AbstFactory* next;
protected:
	int mark;
};