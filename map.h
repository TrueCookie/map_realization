//#pragma once
//#include <string>
#include "list.h"

class map {
private:
	int N;
	list** table;	//how to call list constructor 
public:	
	map() {
		N = 256;
		table = new list*[N];
	}
	~map() {
		delete[] table;
	}
	void put(int, std::string);
	std::string get(int);

	int hash(int);
	int dig_sum(int num);
};


