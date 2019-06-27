#pragma once
#include <fstream>

using namespace std;


namespace simple_container {
	class AbstNumbers {
	public:
		static AbstNumbers* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;
		virtual void Out(ofstream &ofst) = 0;
	};
}