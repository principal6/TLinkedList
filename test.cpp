#include "TLinkedList.h"

using namespace JWENGINE;

int main()
{
	TLinkedList<int> myLL;

	myLL.insert(1);
	std::cout << myLL[0] << std::endl;
	myLL.print_linked_list();

	myLL.insert(3, 0);
	std::cout << myLL[100] << std::endl;
	myLL.print_linked_list();

	myLL.push_back(5);
	myLL.print_linked_list();

	myLL.insert(7, 2);
	myLL.print_linked_list();

	myLL.insert(9);
	myLL.print_linked_list();

	myLL.erase(0);
	myLL.print_linked_list();

	myLL.insert(11, 0);
	myLL.print_linked_list();

	myLL.pop_back();
	myLL.print_linked_list();

	myLL.erase(100);
	myLL.print_linked_list();

	myLL[100] = 99;
	myLL.print_linked_list();

	//myLL.clear();
	//std::cout << myLL.size() << std::endl;

	system("pause");

	return 0;
}