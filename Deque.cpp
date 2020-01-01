//Deque.cpp
//Garrison Travis
#include <iostream>
#include <stdexcept>
#include "Deque.h"

using namespace std;

//Default Constructor
template <class Type>
Deque<Type>::Deque() : size(0), first(NULL), last(NULL) {}

//Parameterized Constructor
//Post: Deque will contain one node with the given value
template <class Type>
Deque<Type>::Deque(Type val) {
	Node<Type>* newNode = new Node<Type>(val);
	first = newNode;
	last = newNode;
	size = 1;
}

//Destructor
template <class Type>
Deque<Type>::~Deque() {
	Deque<Type>::clear();
}

//Returns the size of the Deque
template <class Type>
int Deque<Type>::getSize() {
	return size;
}

//Returns true if Deque is empty
//Returns false if Deque is not empty
template <class Type>
bool Deque<Type>::empty() {
	if (size == 0)
		return true;
	else
		return false;
}

//Pushes an element onto the Deque at the front
//Post: Deque will contain the given value at the front
template <class Type>
void Deque<Type>::push_front(Type val) {
	Node<Type>* newNode = new Node<Type>(val);

	//Empty Deque
	if (size == 0) {
		first = newNode;
		last = newNode;
	}
	//Nonempty Deque
	else {
		newNode->next = first;
		first->prev = newNode;
		first = newNode;
	}
	size++;
}

//Pushes an element onto the Deque at the back
//Post: Deque will contain the given value at the back
template <class Type>
void Deque<Type>::push_back(Type val) {
	Node<Type>* newNode = new Node<Type>(val);

	//Empty Deque
	if (size == 0) {
		first = newNode;
		last = newNode;
	}
	//Nonempty Deque
	else {
		newNode->prev = last;
		last->next = newNode;
		last = newNode;
	}
	size++;
}

//Removes and returns the first element in the Deque
//Post: Deque will no longer contain the first element
template <class Type>
Type Deque<Type>::pop_front() {
	if (empty())
		throw runtime_error("The Deque is Empty! First Doesn't Exist.");

	Node<Type>* temp = first;
	Type val = temp->val;

	//Deque of size 1
	if (size == 1) {
		first = last = NULL;
	}
	//Deque with size > 1
	else {
		first = first->next;
		first->prev = NULL;
		temp->next = NULL;
	}

	delete temp;
	size--;

	return val;
}

//Removes and returns the last element in the Deque
//Post: Deque will no longer contain the last element
template <class Type>
Type Deque<Type>::pop_back() {
	if (empty())
		throw runtime_error("The Deque is Empty! Last Doesn't Exist.");

	Node<Type>* temp = last;
	Type val = temp->val;

	//Deque of size 1
	if (size == 1) {
		first = last = NULL;
	}
	//Deque of size > 1
	else {
		last = last->prev;
		last->next = NULL;
		temp->prev = NULL;
	}

	delete temp;
	size--;

	return val;
}

//Returns the first element of the Deque
//If the Deque is empty, then will thrown an exception
template <class Type>
Type Deque<Type>::front() {
	if (empty())
		throw runtime_error("The Deque is Empty! First Doesn't Exist.");
	return first->val;
}

//Returns the last element of the Deque
//If the Deque is empty, then will throw an exception
template <class Type>
Type Deque<Type>::back() {
	if (empty())
		throw runtime_error("The Deque is Empty! Last Doesn't Exist.");
	return last->val;
}

//Deallocates and deletes every node in the Deque
//Post: Empty Deque
template <class Type>
void Deque<Type>::clear() {
	Node<Type>* current = first;

	while (current) {
		first = current->next;
		delete current;
		current = first;
	}
}

//Outputs the current Deque to the screen
template <class Type>
void Deque<Type>::print() {
	Node<Type>* current = first;

	cout << "Deque = ";
	while (current) {
		cout << current->val << " ";
		current = current->next;
	}
	cout << endl;
}
