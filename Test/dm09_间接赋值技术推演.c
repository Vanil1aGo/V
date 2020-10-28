#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//一级指针技术推演
int getFileLen(int *p)
{
	*p= 40;
}

void main01()
{
	int a = 10;
	int *p = NULL;
	a = 20;   //直接修改

	p = &a;

	*p = 30;

	printf("a:%d \n", a);

	getFileLen(&a);


	printf("a:%d \n", a);


	system("pause");
}

void getMem(char **p2)
{
	*p2 = 200;
}

void main()
{
	char *p1 = NULL;
	char **p2 = NULL;

	p1 = 0x11;
	p2 = 0x22;

	p1 = 0x111; //直接修改

	p2 = &p1;

	*p2 = 100;  // 间接赋值，p2是p1的地址

	printf("p1 :%d \n", p1);
	getMem(p2);
	printf("p1 :%d \n", p1);

	system("pause");
}