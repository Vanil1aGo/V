//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void main01()
//{
//	//1 . ָ������
//	char buf2[100] = { 'a','b','c','d' };
//	//2.  ��ָ������ c���Զ��������
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
//	//�ַ�����ʼ���ַ�����
//	//strlen() sizeof()
//	char buf3[] = "abcd";  //buf3��Ϊ�ַ����飬Ӧ����5���ֽ�
//	                       //��Ϊ�ַ��� 4���ֽ�
//	int len = strlen(buf3);
//	int size = 0;
//	printf("buf3�ַ��ĳ���:%d \n",len);
//    //�������ͱ��� ���̶���С�ڴ��ı���
//
//	size = sizeof(buf3);
//	printf("buf3������ռ�ڴ�ռ�Ĵ�С:%d \n", size);
//
//
//	system("pause");
//}
////ͨ�������±��ָ��
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
//	p = buf5;  //buf5 ������Ԫ�صĵ�ַ
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