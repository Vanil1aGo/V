//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void main() 
//{
//	int a = 10;
//	char * p1 = 100;
//	char ****p2 = 100;
//	// *ͨ��һ����ַ��&a�����ı�a�����ı�ʶ���ڴ�ռ�
//	int *p3 = NULL;
//	p3 = &a;
//	*p3 = 20;
//
//	{
//		int c = 0;
//		c = *p3;
//		//*p�ڵȺ���� ���ڴ渳ֵ
//		//*p�ڵȺ��ұ� ���ڴ�ȡֵ
//		printf("c:%d", c);
//	}
//
//	{
//		char *p4 = NULL;
//		p4 = (char *)malloc(100);
//		p4 = (char *)malloc(200);
//		printf("p4:%d", p4);
//		// p++��P+1 ֻ�ı�ָ����� ���ı��ڴ�ռ�
//	    // *p���� ���ı�ָ������ģ��ı��ڴ���ֵ
//		// Ҫ��֤�ڴ����Ը��ġ�
//	}
//
//	printf("a:%d,p1:%d,p2:%d", a, p1, p2);
//
//	system("pause");
//}