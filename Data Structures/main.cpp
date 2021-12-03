#include <iostream>
#include"LinkedList.h"
using namespace std;


int main()
{
	LinkedList<int> test;

	for (int i = 0; i < 5; i++) {
		test.K_Push_Front(i);
	}
	test.Insert_After(2, 25);
	cout << "      Hello   \n";
	test.K_Push_Back(15);
	test.Search_by_count(10);



	return 0;
}
