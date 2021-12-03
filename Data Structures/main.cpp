#include <iostream>
#include"LinkedList.h"
using namespace std;


int main()
{
	LinkedList<int> test;
	test.print();
	for (int i = 0; i < 5; i++) {
		test.push_front(i);
	}
	test.insert_after(2, 25);
	test.push_back(15);
	test.print();



	return 0;
}
