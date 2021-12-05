#pragma once

#include<iostream>
using namespace std;
#include"TreeNode.h"

template<class T>
class BST
{
public:
	TNode<T>* root;
	int size;

	BST();
	void insert(T value);
	TNode<T>* search(T value);


};
