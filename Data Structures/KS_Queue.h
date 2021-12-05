#pragma once
#include "Node.h"
#include<iostream>
using namespace std;




template<class T>
	
class KS_Queue
{
public:
	KS_Queue();
	Node<T>* first;
	Node<T>* last;
	int size = 0;


	void push(T value);
	void pop();
	void print();
	T front();
	T back();
	bool empty();
};

#include"KS_Queue.cpp"
