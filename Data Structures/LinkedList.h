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

	void K_Push_Front(T value);
	void K_Push_Back(T value);
	Node<T>* Search_by_count(T target);
	void Insert_After(T value, T new_value);
};
#endif // LINKEDLIST_H
