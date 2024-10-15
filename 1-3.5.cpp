/*
* 1.3.5 位运算符
位运算符用于对整数类型的二进制位进行操作。常见的位运算符包括：

&（按位与）
|（按位或）
^（按位异或）
<<（左移）
>>（右移）
*/

#include <iostream>
using namespace std;

int i() {
	int a = 5; // 0101
	int b = 3; // 0011

	cout << "a & b: " << (a & b) << endl; // 1(0001)
	cout << "a | b: " << (a | b) << endl; // 7(0111)
	cout << "a ^ b: " << (a ^ b) << endl; // 6(0110)
	cout << "a << 1: " << (a << 1) << endl; // 10 (1010)
	cout << "a >> 1: " << (a >> 1) << endl; // 2(0010)
 
	return 0;
}


