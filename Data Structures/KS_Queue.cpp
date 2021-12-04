#include "KS_Queue.h"




template<class T>
KS_Queue<T>::KS_Queue()
{
	first = last = NULL;

}

template<class T>
void KS_Queue<T>::push(T value)
{
	Node<T>* temp = new Node<T>;
	temp->Next = NULL;
	temp->Value = value;

	if(last!= NULL)
		last->Next = temp;
	last = temp;
	if (size == 0)
		first = last;
	size++;
	

}
template<class T> 
void KS_Queue<T>::pop()
{
	Node<T>* temp = new Node<T>;
	temp = first;
	if (size == 0)
	{
		cout << "Queue Empty Can't pop\n";
		return;
	}
	first = first->Next;
	size--;
	delete temp;
	if (size == 0)
	{
		last = first = NULL;
	}
}

template<class T>
T KS_Queue<T>::front()
{
	if (first == NULL)
	{
		cout << "Empty Queue \n";
		return T();
	}
	return first->Value;
}


template<class T>
void KS_Queue<T>::print()
{
	Node<T>* current = first;
	cout << "Queue :";
	while (current != NULL)
	{
		cout << " " << current->Value ;
		current = current->Next;
	}
	cout << endl;
}
template<class T>
T KS_Queue<T>::back()
{
	if (last == NULL)
	{
		cout << "Empty Queue \n";
		return T();
	}
	return last->Value;
}

template<class T>
bool KS_Queue<T>::empty()
{
	return (size==0);
}
void QTemporaryFunction()
{
	KS_Queue<int> test;
	test.pop();
	test.print();
	test.push(5);
	test.empty();
	test.front();
	test.back();
}