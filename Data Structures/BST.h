#pragma once
#ifndef BST_H 
#define BST_H

#include<iostream>
using namespace std;
#include"TreeNode.h"

template<class T>
class BST
{
protected:
	void Inorder(TNode<T>* R);
public:
	TNode<T>* root;
	int size;

	BST();
	void insert(T value);
	void print();
	int  count(T value);
	T min();
	T max();

};
#endif
#include"BST.cpp"