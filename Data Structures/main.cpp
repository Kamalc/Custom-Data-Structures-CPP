#include <iostream>
#include"LinkedList.h"
using namespace std;


int main()
{
	LinkedList<int> test;
	test.print();
	test.push_front(1);
	test.push_front(2);
	test.push_front(3);
	test.push_front(4);
	test.print();
	
	test.remove_element(test.head);
	test.print();

	cout << test.size << endl;

	return 0;
}
