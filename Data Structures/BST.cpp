#include "BST.h"


template<class T>
BST<T>::BST()
{
	root = NULL;
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