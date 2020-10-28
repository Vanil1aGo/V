//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void main() 
//{
//	int a = 10;
//	char * p1 = 100;
//	char ****p2 = 100;
//	// *通过一个地址（&a），改变a变量的标识的内存空间
//	int *p3 = NULL;
//	p3 = &a;
//	*p3 = 20;
//
//	{
//		int c = 0;
//		c = *p3;
//		//*p在等号左边 给内存赋值
//		//*p在等号右边 从内存取值
//		printf("c:%d", c);
//	}
//
//	{
//		char *p4 = NULL;
//		p4 = (char *)malloc(100);
//		p4 = (char *)malloc(200);
//		printf("p4:%d", p4);
//		// p++和P+1 只改变指针变量 不改变内存空间
//	    // *p复制 不改变指针变量的，改变内存块的值
//		// 要保证内存块可以更改。
//	}
//
//	printf("a:%d,p1:%d,p2:%d", a, p1, p2);
//
//	system("pause");
//}