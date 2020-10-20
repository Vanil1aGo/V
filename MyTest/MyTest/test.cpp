#include <iostream>
#include "chapterOne.h"

int main() 
{
	test1_3();
	test1_4(3,4);
	test1_9();
	test1_10();
	std::cout << "请输入两个整数:";
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	test1_11(v1, v2);
	test1_16();
}