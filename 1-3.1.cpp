/*
* 1.3.1 算术运算符

算术运算符用于执行数学运算，包括加法、减法、乘法、除法和取余。

+（加法）：返回两个操作数的和。
-（减法）：返回第一个操作数减去第二个操作数的结果。
*（乘法）：返回两个操作数的乘积。
/（除法）：返回第一个操作数除以第二个操作数的结果。
%（取余）：返回第一个操作数除以第二个操作数的余数。
*/

#include <iostream>
using namespace std;

int e() {
	int a = 10;
	int b = 3;

	cout << "a + b等于:" << a + b << endl;
	cout << "a - b等于:" << a - b << endl;
	cout << "a * b等于:" << a * b << endl;
	cout << "a / b等于:" << a / b << endl;
	cout << "a % b等于:" << a % b << endl;

	return 0;
}