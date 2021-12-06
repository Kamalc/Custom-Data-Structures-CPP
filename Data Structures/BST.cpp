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

	TNode<T>* temp = root;
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
int BST<T>::count(T value)
{
	TNode<T>* temp = Search(value);
	if (temp != NULL)
		return temp->cnt;
	return 0;
}

template<class T>
T BST<T>::min()
{
	TNode<T>* temp = root;
	return min(root);
}

template<class T>
T BST<T>::max()
{
	TNode<T>* temp = root;
	return max(root);
}

template <class T>
TNode<T>* BST<T>::successor(TNode<T>* node)
{
	if (node == NULL)
	{
		cout << "Element does not exist on the tree" << endl;
		return nullptr;
	}
	if (node->Right != NULL)
	{
		return Search(min(node->Right));
	}
	while (node->Parent != NULL)
	{
		if (node->Parent->Value > node->Value)
		{
			return node->Parent;
		}
		node = node->Parent;
	}
	cout << "No successor for this element" << endl;
	return nullptr;

}



template<class T>
T BST<T>::successor(T value)
{
	TNode<T>* temp = Search(value);
	if (temp == NULL)
	{
		cout << "Element does not exist on the tree" << endl;
		return T();
	}
	temp = successor(temp);
	return temp->Value;
	
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

template<class T>
T BST<T>::min(TNode<T>* node)
{
	while (node->Left != NULL)
	{
		node = node->Left;
	}

	return node->Value;
}

template<class T>
T BST<T>::max(TNode<T>* node)
{
	while (node->Right != NULL)
	{
		node = node->Right;
	}

	return node->Value;
}

template<class T>
TNode<T>* BST<T>::Search(T value)
{

	TNode<T>* temp = root;
	while (temp != NULL)
	{
		if (temp->Value > value)
		{
			temp = temp->Left;
		}
		else if (temp->Value < value)
		{
			temp = temp->Right;
		}
		else
		{

			return temp;
		}
	}

	return nullptr;
}


template<class T>
void BST<T>::erase(T value)
{
	TNode<T>* temp = Search(value);
	TNode<T>* tempSucc;
	TNode<T>* tempNode = new TNode<T>;
	if (temp == NULL)
	{
		cout << "Element does not exist on the tree" << endl;
		return void();
	}



	if (temp->Right == NULL && temp->Left == NULL)
	{
		if (temp->Parent == NULL)
		{
			root = NULL;
		}
		else if (temp->Parent->Value > temp->Value)
		{
			temp->Parent->Left = NULL;
		}
		else
		{
			temp->Parent->Right = NULL;
		}

		
		delete temp;
	}
	else if (temp->Right != NULL && temp->Left != NULL)
	{
		tempSucc = successor(temp);
		tempNode->cnt = tempSucc->cnt;
		tempNode->Value = tempSucc->Value;
		erase(tempSucc->Value);
		temp->cnt = tempNode->cnt;
		temp->Value = tempNode->Value;
		delete tempNode;

	}
	else
	{
		TNode<T>* child = new TNode<T>;;
		if (temp->Right != NULL)
			child = temp->Right;
		if (temp->Left != NULL)
			child = temp->Left;

		if (temp->Parent->Value > temp->Value)
		{

			temp->Parent->Left = child;
			child->Parent = temp->Parent;
		}
		else
		{
			temp->Parent->Right = child;
			child->Parent = temp->Parent;
		}	
		if (child->Parent == NULL)
			root = child;
		delete temp;
	}
	
}
