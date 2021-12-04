#include "LinkedList.h"
template<class T>
LinkedList<T>::LinkedList() {
	tail = head = NULL;
}

template<class T>
void LinkedList<T>::push_front(T value) {

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
void LinkedList<T>::push_back(T value) {
	Node<T>* temp = new Node<T>;
	temp->Value = value;
	temp->Next = NULL;
	if (tail != NULL)
		tail->Next = temp;

	tail = temp;
	if (!size)
		head = tail;
	size++;
}
template<class T>
Node<T>* LinkedList<T>::find(T target) {
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
void LinkedList<T>::insert_after(T value, T new_value) {

	Node<T>* N_Head = find(value);
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
template<class T>
void LinkedList<T>::print() {
	if (head == NULL)
	{
		cout << "Empty List." << endl;
		return;
	}
	cout << "Linked List : ";
	Node<T>* N_head = head;
	do 
	{
		cout << " " << N_head->Value;
		N_head = N_head->Next;
		
	} while (N_head != NULL);
	cout << endl;

}

template<class T>
void LinkedList<T>::remove_element(T value) {

	Node<T>*  prev , *current;
	current = prev= head;

	while (current != NULL && current->Value != value)
	{
		prev = current;
		current = current->Next;
	}

	if (current == NULL)
	{
		cout << "Can't remove a not existing element\n";
		return void();
	}

	if (prev == head)
		head = head->Next;
	else
		prev->Next = current->Next;
	
	size--;

}
template<class T>
void LinkedList<T>::remove_element(Node<T> *target_Node ) {
	Node<T>* prev, * current;
	current = prev = head;

	while (current != NULL && current != target_Node)
	{
		prev = current;
		current = current->Next;
	}

	if (current == NULL)
	{
		cout << "Can't remove a not existing element\n";
		return void();
	}

	if (prev == head)
		head = head->Next;
	else
		prev->Next = current->Next;

	size--;

}
void TemporaryFunction()
{
	LinkedList<int> test;
	test.insert_after(1, 1);
	test.push_back(1);
	test.push_front(1);
	test.print();
	test.remove_element(5);
	test.remove_element(test.head);
}