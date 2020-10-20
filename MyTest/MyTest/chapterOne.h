#ifndef TEST_H
#define TEST_H
#include <iostream>

void test1_3() 
{
    std::cout << "hello world"<< std::endl;
}
void test1_4(int a,int b)
{
    int value = a * b;
    std::cout << value << std::endl;
}
void test1_9()
{
    int sum = 0;
    int value = 50;
    while (value <= 100)
    {
        sum += value;
        ++value;
    }
    std::cout << sum << std::endl;
}
void test1_10()
{
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
}
void test1_11(int a,int b)
{
    if (a <= b)
    {
        for (int i = a; i < b; i++)
        {
            std::cout << i << std::endl;
        }
    }
    else
    {
        for (int i = b; i < a; i++)
        {
            std::cout << i << std::endl;
        }
    }
}
void test1_16()
{
    std::cout << "请输入一组数：";
        int sum = 0;
        int value = 0;
        while (std::cin >> value)
        
            sum += value;
        
        std::cout << "Sum is:" << sum << std::endl;

        return 0;
}
#endif // TEST_H
