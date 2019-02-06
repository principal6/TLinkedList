#include "TLinkedList.h"

using namespace JWENGINE;

int main()
{
	TLinkedList<int> myLL;

	myLL.insert(1);
	std::cout << myLL[0] << std::endl;
	std::cout << myLL[100] << std::endl;

	myLL.insert(3, 0);
	std::cout << myLL[0] << std::endl;
	std::cout << myLL[100] << std::endl;

	myLL.push_back(5);

	myLL.insert(7, 2);

	myLL.insert(9);

	myLL.erase(0);

	myLL.insert(11, 0);

	myLL.pop_back();

	myLL.erase(100);

	myLL[100] = 99;

	//myLL.clear();
	//std::cout << myLL.size() << std::endl;

	system("pause");

	return 0;
}