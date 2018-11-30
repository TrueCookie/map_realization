#pragma once
#include <string>
#include "list.h"
#include "map.h"

void map::put(int key, std::string str) {
	if (table[hash(key)]->find(key) == table[hash(key)]->end()) {	//if such key isn't in a list
		table[hash(key)]->push_back(key, str);	//push it 
	}
	else {												//if such key is in a list
		table[hash(key)]->remove(key);			//replace it 
		table[hash(key)]->push_back(key, str);
	}
}

std::string map::get(int key) {
	if (table[hash(key)]->find(key) != table[hash(key)]->end()) {	//if such key is in a list
		return table[hash(key)]->find(key)->value;
	}
	else {												//if such key isn't
		throw "Key not found";
	}
}

int map::hash(int val) {
	return val;
}

int map::dig_sum(int num) {
	if (num > 9) {
		return (num % 10) + dig_sum(num / 10);
	}
	else {
		return num;
	}
}
