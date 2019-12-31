//Node.h
//Garrison Travis
#ifndef NODE_H
#define NODE_H

template <class Type>
struct Node {
	Type val;
	Node<Type>* next;
	Node<Type>* prev;

	Node() : val(0), next(NULL), prev(NULL) {}
	Node(Type val) : next(NULL), prev(NULL) {
		this->val = val;
	}
};

#endif
