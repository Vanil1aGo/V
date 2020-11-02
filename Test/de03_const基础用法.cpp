//#include <iostream>
//using namespace std;
//
//struct MyStruct
//{
//	char name[64];
//	int age;
//};
////指针所指向的内存空间不能被修改
////C语言中的const 可以用地址指针间接赋值
//int operatorMyStruct(const MyStruct *p)
//{
//	return 0;
//}
//int operatorMyStruct01(MyStruct* const p)
//{
//	p->age = 10;
//	return 0;
//}
//int operatorMyStruct02(const MyStruct* const p)
//{
//	p->age = 10;
//	return 0;
//}
//
//void main()
//{
//	//const int a =1;
//	//int const b =2;  //一样
//
//	//const int *c;  //const修饰指针指向的内存空间，不能更改
//	//int *const d;  //const修饰指向不能修改。
//
//	system("pause");
//}