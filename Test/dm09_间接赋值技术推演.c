//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
////一级指针技术推演
//int getFileLen(int *p)
//{
//	*p= 40;
//}
//
//void main01()
//{
//	int a = 10;
//	int *p = NULL;
//	a = 20;   //直接修改
//
//	p = &a;
//
//	*p = 30;
//
//	printf("a:%d \n", a);
//
//	getFileLen(&a);
//
//
//	printf("a:%d \n", a);
//
//
//	system("pause");
//}
//
//void getMem(char **p2)
//{
//	*p2 = 200;
//}
//
//int getMem3(char **p1, int *len, char **p2,int *len2)
//{
//	int ret = 0;
//
//	char *tmp1, *tmp2;
//	
//	tmp1 = (char *)malloc(100);
//
//	strcpy(tmp1, "112233");
//
//	*len = strlen(tmp1);
//
//	*p1 = tmp1;
//
//	tmp2 = (char *)malloc(100);
//
//	strcpy(tmp2, "aabbcc");
//
//	*len2 = strlen(tmp2);
//
//	*p2 = tmp2;
//
//	return ret;
//  
//}
//
//void main02()
//{
//	char *p1 = NULL;
//	char **p2 = NULL;
//
//	p1 = 0x11;
//	p2 = 0x22;
//
//	p1 = 0x111; //直接修改
//
//	p2 = &p1;
//
//	*p2 = 100;  // 间接赋值，p2是p1的地址
//
//	printf("p1 :%d \n", p1);
//	getMem(p2);
//	printf("p1 :%d \n", p1);
//
//	system("pause");
//}
//
//void main()
//{
//	int ret = 0;
//
//	char *p1 = NULL;
//	int *len1 = 0;
//	char *p2 = NULL;
//	int *len2 = 0;
//	
//	ret = getMem3(&p1, &len1, &p2, &len2);
//
//	if (ret != 0)
//	{
//		printf("func getMem3() err:%d\n", ret);
//		return ret;
//	}
//	printf("p1:%s \n", p1);
//	printf("p2:%s \n", p2);
//
//	if (p1 != NULL)
//	{
//		free(p1);
//		p1 = NULL;
//	}
//	if (p2 != NULL) 
//	{
//		free(p2);
//		p2 = NULL;
//	}
//	
//	system("pause");
//}