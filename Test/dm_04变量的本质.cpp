#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
	int a = 10;   //ֱ�Ӹ�ֵ
	printf("&a:%d", &a);

	*((int *)&a) = 200; // ��Ӹ�ֵ

	printf("a:%d", a);

	system("pause");
}