//#pragma once
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
	}
	bool is_empty();
	void reverse();
	size_t size();

	void read();
	void push_back(data*);
	void push_front(data*);
	data* find(int);
	int remove(int);

	data* end();
};

