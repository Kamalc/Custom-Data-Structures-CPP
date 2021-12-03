#pragma once
#ifndef LINKEDLIST_H 
#define LINKEDLIST_H

#include<iostream>
using namespace std;



template<class T>
class Node {
public:
	T Value;
	Node* Next;
};
template<class T>
class LinkedList {


public:


	Node<T>* head;
	Node<T>* tail;
	int size = 0;
public:
	LinkedList();

	void push_front(T value);
	void push_back(T value);
	Node<T>* find(T target);
	void insert_after(T value, T new_value);
	void print();
};
#endif // LINKEDLIST_H
