#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//һ��ָ�뼼������
int getFileLen(int *p)
{
	*p= 40;
}

void main01()
{
	int a = 10;
	int *p = NULL;
	a = 20;   //ֱ���޸�

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

	p1 = 0x111; //ֱ���޸�

	p2 = &p1;

	*p2 = 100;  // ��Ӹ�ֵ��p2��p1�ĵ�ַ

	printf("p1 :%d \n", p1);
	getMem(p2);
	printf("p1 :%d \n", p1);

	system("pause");
}