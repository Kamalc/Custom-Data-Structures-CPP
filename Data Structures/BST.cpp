#include "BST.h"


template<class T>

BST<T>::BST()
{
	root = NULL;
	size = 0;
}

template<class T>
inline void BST<T>::insert(T value)
{

	TNode<T>* temp= root;
	TNode<T>* newNode = new TNode<T>;
	newNode->Value = value;

	if (root == NULL)
	{
		root =  newNode;
		size++;
	}
	else
	{
		while (temp != NULL)
		{

			if (temp->Value > value)
			{
				if (temp->Left == NULL)
				{
					temp->Left = newNode;
					newNode->Parent = temp;
					size++;
				}
				else
				{
					temp = temp->Left;
				}
			}
			else if (temp->Value < value)
			{
				if (temp->Right == NULL)
				{
					temp->Right = newNode;
					newNode->Parent = temp;
					size++;
				}
				else
				{
					temp = temp->Right;
				}
			}
			else 
			{
				temp->cnt++;
				return;
			}
		
		
		}


	}


}


void BSTtemporaryFunction()
{
	BST<int> test;
	test.insert(6);
}