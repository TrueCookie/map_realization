#pragma once
#include <string>
#include "list.cpp"

class map {
private:
	const int N = 256;
	list** table = new list*[N];	//how to call list constructor 
public:	
	map() {
	}
	void put(int, std::string);
	std::string get(int);

	int hash(int);
	int dig_sum(int num);
};


