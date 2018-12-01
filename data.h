//#pragma once
struct data {
	data() {
		prev = nullptr;
		next = nullptr;
	}
	int key;
	std::string value;
	data* prev;
	data* next;
};