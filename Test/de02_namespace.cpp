#include <iostream>
using namespace std;
//
////�����ڴ�ռ�
//
//namespace namespaceA
//{
//	int a = 10;
//}
//namespace namespaceB
//{
//	int a = 120;
//	namespace namespaceC
//	{
//		struct MyStruct
//		{
//			char name[32];
//			int age;
//		};
//	}
//
//}
//void main()
//{
//	using namespace namespaceA;
//
//	cout << a << endl;
//
//	system("pause");
//}
class A
{
public:
	int &a;
};
int main()
{
	cout << sizeof(A) << endl;
	return 0;
}

