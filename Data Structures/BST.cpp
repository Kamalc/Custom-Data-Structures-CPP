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

template<class T>
void BST<T>::print()
{
	Inorder(root);
}

template<class T>
void BST<T>::Inorder(TNode<T>* current )
{

	if (current == NULL)
		return;
	Inorder(current->Left);
	cout << current->Value << endl;
	Inorder(current->Right);


}

