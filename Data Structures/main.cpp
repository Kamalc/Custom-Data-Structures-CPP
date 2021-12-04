#include <iostream>
#include"LinkedList.h"
#include"KS_Queue.h"
using namespace std;


int main()
{
	KS_Queue<int> test;

	for (int i = 0; i < 5; i++)
	{
		test.push(i);
	}	
	cout << test.empty() << endl;
	cout<< test.size << endl;
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
		test.push(i*10);
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

	return 0;
}
