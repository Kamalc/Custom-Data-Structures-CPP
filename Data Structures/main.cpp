#include <iostream>
#include"LinkedList.h"
#include"KS_Queue.h"
#include"Stack.h"
#include"BST.h"

using namespace std;


void TestLinkedList()
{
	LinkedList<int> test;

	for (int i = 0; i < 5; i++) {
		test.push_front(i);
	}
	test.insert_after(2, 25);
	cout << "      Hello   \n";
	test.push_back(15);
	test.print();

}
void TestQueue()
{
	KS_Queue<int> test;

	for (int i = 0; i < 5; i++)
	{
		test.push(i);
	}
	cout << test.empty() << endl;
	cout << test.size << endl;
	cout << test.front() << endl;
	cout << test.back() << endl;

	test.print();
	for (int i = 0; i < 2; i++)
	{
		test.pop();
	}
	test.print();
	for (int i = 1; i <= 10; i++)
	{
		test.push(i * 10);
		test.pop();
		test.print();

	}
	test.print();
	for (int i = 0; i < 20; i++)
	{
		test.pop();
	}
	cout << test.empty() << endl;
	cout << test.size << endl;
	cout << test.front() << endl;
	cout << test.back() << endl;

}
void test_stack()
{
	Stack<int>s;

	for (int i = 1; i <= 5; i++)
	{
		s.push(i);
	}
	s.print();
	s.clear();
	for (int i = 1; i <= 5; i++)
	{
		s.push(i * 10);
	}
	s.print();
	for (int i = 1; i <= 5; i++)
	{
		s.pop();
		s.print();
	}


}

void test_BST()
{
	BST<int> test;
	test.insert(5);
	test.insert(10);
	test.insert(5);
	test.insert(20);
	test.insert(3);
	test.insert(2);
	test.insert(11);
	test.insert(25);

	test.print();
	//cout << test.count(5) << endl;
	cout << test.min() << endl;
	cout << test.max() << endl;
}

int main()
{
	test_BST();
	return 0;
}
