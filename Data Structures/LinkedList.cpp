#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
	tail = head = NULL;
}

template<class T>
void LinkedList<T>::K_Push_Front(T value) {

	Node<T>* temp_ptr;
	temp_ptr = new Node<T>;
	temp_ptr->Value = value;
	temp_ptr->Next = head;
	head = temp_ptr;
	if (!size)
		tail = head;
	size++;
}

template<class T>
void LinkedList<T>::K_Push_Back(T value) {
	Node<T>* temp = new Node<T>;
	temp->Value = value;
	temp->Next = NULL;
	tail->Next = temp;
	tail = temp;
	size++;
}
template<class T>
Node<T>* LinkedList<T>::Search_by_count(T target) {
	Node<T>* Current_Head = head;
	if (Current_Head == NULL)
		return Current_Head;
	while (Current_Head->Next != NULL && Current_Head->Value != target) {
		cout << Current_Head->Value << "   " << endl;
		Current_Head = Current_Head->Next;
	}
	cout << Current_Head->Value << "   " << endl;
	if (Current_Head->Value == target)
		return Current_Head;

	return NULL;
}

template<class T>
void LinkedList<T>::Insert_After(T value, T new_value) {

	Node<T>* N_Head = Search_by_count(value);
	if (N_Head == NULL) {
		cout << "Element Not Exist\n";
		return void();
	}
	Node<T>* temp = new Node<T>;
	temp->Next = N_Head->Next;
	temp->Value = new_value;
	N_Head->Next = temp;
	size++;
}
void TemporaryFunction()
{
	LinkedList<int> test;
	test.Insert_After(1, 1);
	test.K_Push_Back(1);
	test.K_Push_Front(1);
}