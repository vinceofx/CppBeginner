/*
*1.3.3 比较运算符
比较运算符用于比较两个值，并返回布尔值（true或false）。常见的比较运算符包括：

==（等于）
!=（不等于）
<（小于）
>（大于）
<=（小于等于）
>=（大于等于）
*/

#include <iostream>
using namespace std;

int g() {
	int a = 10;
	int b = 20;

	cout << "a == b: " << (a == b) << endl; // false
	cout << "a != b: " << (a != b) << endl; // true
	cout << "a < b: " << (a < b) << endl; // true
	cout << "a > b: " << (a > b) << endl; // false
	cout << "a <= b: " << (a <= b) << endl; // true
	cout << "a >= b: " << (a >= b) << endl; // false

	return 0;
}