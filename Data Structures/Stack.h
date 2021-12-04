#pragma once
#include "Node.h"
#include<iostream>
using namespace std;

template<class T>

class Stack
{
public:
	int size;
	Node<T>* head;
	Stack();
	void pop();
	void push(T value);
	void print();
	void clear();
	T top();





};

