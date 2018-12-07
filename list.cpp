#include <iostream>
#include "list.h"

void list::push_back(data* cell) {
	if (this->is_empty()) {
		head = cell;
		tail = new data;
	}
	else {
		tail->prev->next = cell;
	}
	tail->prev = cell;
	cell->next = tail;
}

void list::push_front(data* cell) {
	if (this->is_empty()) {
		tail = new data;
		tail->prev = cell;
		cell->next = tail;
	}
	else {
		head->prev = cell;
		cell->next = head;
	}
	head = cell;
}

void list::read() {
	data* tmp = head;
	while (tmp != tail) {
		std::cout << tmp->value << "; ";
		tmp = tmp->next;
	}std::cout << std::endl;
}

void list::reverse() {
	data* move = head;
	data* tmp = nullptr;
	while (move != tail) {
		tmp = move->next;
		move->next = move->prev;
		move->prev = tmp;

		move = move->prev;
	}
	data* tmp_end = head;
	head = tail->prev;
	head->prev = nullptr;
	tail->next = nullptr;
	tmp_end->next = tail;
}

bool list::is_empty() {
	return head == tail;
}

size_t list::size() {
	size_t count = 0;
	data* tmp = head;
	while (tmp != tail) {
		count++;
		tmp = tmp->next;
	}
	return count;
}

int list::remove(int key) {
	data* p_key = find(key);
	if (p_key != tail) {
		p_key->prev->next = p_key->next;
		p_key->next->prev = p_key->prev;
	}else {
		std::cout << "Value has not been found" << std::endl;
	}return p_key->key;
}

data* list::find(int key) {
	data* tmp = head;
	while (tmp != tail) {
		if (tmp->key == key) {
			break;
		}else {
			tmp = tmp->next;
		}
	}return tmp;
}

data* list::end(){
	return this->tail;
}