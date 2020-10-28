//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	int i = 0;
//	char buf[128];   //c可以在栈上分配内存
//	char *p1 = NULL;
//	char *p2 = NULL;
//	p2 = (char *)malloc(100);
//
//	p1 = &buf[0];
//	p1 = &buf[1];
//	p1 = &buf[2];
//
//	strcpy(p2, "123456789");
//
//	for (i = 0; i < 10; i++)
//	{
//		p1 = buf[i];
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		p1 = p2+i;
//		printf("%c", *p1);
//	}
////	strcpy();
//
//
//
//	system("pause");
//}