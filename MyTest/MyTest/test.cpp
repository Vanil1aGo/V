#include <iostream>
using namespace std;
#include "test.h"
#include <vector>
#include <string>   
#include <cassert>
int main() 
{
    int a = 5;
    int b = 6;
  //  test01();
    int ret =  test02(a);
    cout << ret << endl;


    test03(&a, &b);
    cout << a << b << endl;
    /*vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);*/

    int arr[4] = { 0,1,2,3 };

    test04(begin(arr),end(arr));
    
    /*int val = 0;
    assert(val);*/
}