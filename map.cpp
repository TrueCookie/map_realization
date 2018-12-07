#include "map.h"

void map::put(int key, std::string str) {
	data* cell = new data;
	cell->key = key;
	cell->value = str;
	if (table[this->hash(key)].find(key) == table[this->hash(key)].end()) {	//if key isn't in a list
		table[this->hash(key)].push_back(cell);	//push it
	}else {												//if key is in a list
		table[this->hash(key)].remove(key);			//replace it
		table[this->hash(key)].push_back(cell);
	}
}

std::string map::get(int key) {
	if (table[hash(key)].find(key) != table[hash(key)].end()) {	//if such key is in a list
		return table[hash(key)].find(key)->value;
	}
	else {												//if such key isn't
		throw "Key not found";
	}
}

int map::hash(int val) {
	return val % N;
}

int map::dig_sum(int num) {
	if (num > 9) {
		return (num % 10) + dig_sum(num / 10);
	}
	else {
		return num;
	}
}