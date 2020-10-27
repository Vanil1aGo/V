#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
	int a = 10;   //直接赋值
	printf("&a:%d", &a);

	*((int *)&a) = 200; // 间接赋值

	printf("a:%d", a);

	system("pause");
}