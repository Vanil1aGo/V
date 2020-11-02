//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void main01()
//{
//	//1 . 指定长度
//	char buf2[100] = { 'a','b','c','d' };
//	//2.  不指定长度 c会自动求个数。
//	char buf1[] = { 'a','b','c','d' };
//
//	
//	printf("buf2: %s \n", buf2);
//
//	printf("buf[88] : %d", buf2[88]);
//
//	system("pause");
//}
//
//void main02()
//{
//	//字符串初始化字符数组
//	//strlen() sizeof()
//	char buf3[] = "abcd";  //buf3作为字符数组，应该是5个字节
//	                       //作为字符串 4个字节
//	int len = strlen(buf3);
//	int size = 0;
//	printf("buf3字符的长度:%d \n",len);
//    //数据类型本质 ：固定大小内存块的别名
//
//	size = sizeof(buf3);
//	printf("buf3数组所占内存空间的大小:%d \n", size);
//
//
//	system("pause");
//}
////通过数组下标和指针
//void main()
//{
//	int i = 0;
//	char *p = NULL;
//	char buf5[128] = "abcdefg"; 
//
//	for (i = 0; i < strlen(buf5); i++)
//	{
//		printf("%c", buf5[i]);
//	}
//	p = buf5;  //buf5 数组首元素的地址
//
//	for (i = 0; i < strlen(buf5); i++)
//	{
//		printf("%c", *(p + i));
//	}
//
//	 
//
//	system("pause");
//}