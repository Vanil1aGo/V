//#include <iostream>
//using namespace std;
//void swap(int &a, int &b)
//{
//	int c = a;
//	a = b;
//	b = c;
//}
//
//struct  Teacher
//{
//	char name[64];
//	int age;
//};
//
//void printfFT(Teacher *pT)
//{
//	cout << pT->age << endl;
//}
//void printfFT1(Teacher &pT)
//{
//	cout << pT.age << endl;
//	pT.age = 33;
//}
//void printfFT2(Teacher pT)
//{
//	cout << pT.age << endl;
//}
//void main()
//{
//	Teacher t1;
//	t1.age = 35;
//
//	int a = 10;
//
//	int b = 20;
//
//	swap(a, b);
//	
//	printfFT(&t1);
//
//	printfFT1(t1);    //pT��t1�ı���
//
//	printfFT2(t1);   //pT���βΣ�t1copyһ�����ݣ���pT
//
//	cout << a << b << endl;
//
//	// ����������������
//
//
//
//	system("pause");
//}