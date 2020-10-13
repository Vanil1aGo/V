#ifndef TEST_H
#define TEST_H
#include <iostream>
using namespace std;

void test01() 
{
	/*int arr[4] = { 0,1,2,3 };
	int* p = arr;

	constexpr size_t sz = sizeof(arr) / sizeof(*arr);

	cout << sz<<endl;*/    //求数组中元素个数

	double b = 3.41;
	int a = 2;
	double c = static_cast<double>(b) / a;
	cout << c << endl;

	double d = 1.12312312;
	void* p = &d;
	double *dp = static_cast<double*>(p);

	cout << *dp << dp << endl;



}


#endif // TEST_H
