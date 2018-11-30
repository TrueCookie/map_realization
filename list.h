#pragma once
#include <string>
#include "collection.h"
#include "data.h"


class list : public collection {
private:
	data* head;
	data* tail;
public:
	list() {
		head = nullptr;
		tail = head;
		//std::cout << "list ctor";
	}
	bool is_empty();
	void reverse();
	size_t size();

	void read();
	void push_back(int, std::string);
	void push_front(int, std::string);
	data* find(int);
	int remove(int);

	data* end();
};