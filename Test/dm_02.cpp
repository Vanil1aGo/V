////形参中的数组，编译器会把它当做指针处理
////数组做函数参数，退化成指针
//
////把数组的内存首地址和数组的有效长度传给被调用函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void sortArray(int *a,int num) {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < num; i++) 
//	{
//		for (j = 0; j < num; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//
//}
//void printfArray(int *a,int num) 
//{
//	int i = 0;
//	for (i = 0; i < num; i++) 
//	{
//		printf("%d\n", a[i]);
//	}
//}
//
//int main() 
//{
//	int a[] = { 11,22,33,44,55,66,77,88,99 };
//	int num = 0;
//	num = sizeof(a) / sizeof(a[0]);
//	printfArray(a, num);
//	sortArray(a, num);
//	printfArray(a, num);
//
//
//
//
//}