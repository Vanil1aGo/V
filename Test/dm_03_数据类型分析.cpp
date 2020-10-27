//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////数据类型的本质：固定大小内存块的别名
////b &b 数组数据类型（定义一个1 数组类型 2数组指针 3数组类型和数组指针的关系）
//
////void main()
////{
////	int a; //告诉编译器分配4个字节的内存
////	int b[10]; //告诉编译器分配40个字节内存
////	printf("b:%d,b+1:%d,&b:%d,&b+1:%d", b, b + 1, &b, &b + 1);
////    // b 为首个元素的地址 &b为整个数组的地址
////
////}
//
//
//
////数据别名 tpyedef
//typedef struct Teacher
//{
//	char name[64];
//	int age;
//}Teacher;
//
//
//void main()
//{
//	int a; //告诉编译器分配4个字节的内存
//	int b[10]; //告诉编译器分配40个字节内存
//	//printf("b:%d,b+1:%d,&b:%d,&b+1:%d", b, b + 1, &b, &b + 1);
//	// b 为首个元素的地址 &b为整个数组的地址
//	struct Teacher t1;
//	t1.age = 10;
//	
//
//}
