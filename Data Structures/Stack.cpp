#include "Stack.h"




template<class T>
Stack<T>::Stack()
{
	head = NULL;
	size = 0;
}

template<class T>
inline void Stack<T>::pop()
{
	if (size == 0)
	{
		cout << "Empty Stack" << endl;
		return void();
	}
	Node<T>* temp = head;
	head = head->Next;
	delete temp;
	size--;
}

template<class T>
inline void Stack<T>::push(T value)
{
	Node<T>* temp = new Node<T>;
	temp->Value = value;

	temp->Next = head;
	head = temp;
	size++;
}

template<class T>
void Stack<T>::print()
{
	Node<T>* temp = head;
	cout << "Stack Element :";
	while (temp != NULL)
	{
		cout <<" "<< temp->Value ;
		temp = temp->Next;
	}
	cout << endl;

}

template<class T>
void Stack<T>::clear()
{
	Node<T>* temp;;
	while (head != NULL)
	{
		temp = head;
		head = head->Next;
		delete temp;
	}
	size = 0;
}

template<class T>
inline T Stack<T>::top()
{

	return head->Value;
}

void StacktemporaryFunction()
{
	Stack<int> test;
	test.pop();
	test.push(5);
	test.top();
	test.print();
	test.clear();
}