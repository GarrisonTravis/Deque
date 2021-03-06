//Deque.h
//Garrison Travis
#ifndef DEQUE_H
#define DEQUE_H
#include "Node.h"

template <class Type>
class Deque {
private:
	Node<Type>* first;
	Node<Type>* last;
	int size;

public:
	Deque();
	Deque(Type);
	~Deque();

	int getSize();
	bool empty();
	
	void push_front(Type);
	void push_back(Type);

	Type pop_front();
	Type pop_back();

	Type front();
	Type back();

	void clear();

	void print();
};

#endif
