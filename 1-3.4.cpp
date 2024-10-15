/*
* 1.3.4 逻辑运算符
逻辑运算符用于执行逻辑运算，常见的逻辑运算符包括：

&&（逻辑与）：当两个操作数都为true时，结果为true。
||（逻辑或）：当至少有一个操作数为true时，结果为true。
!（逻辑非）：将操作数的布尔值取反。
*/

#include <iostream>
using namespace std;

int h() {
	bool x = true;
	bool y = false;

	cout << "x && y: " << (x && y) << endl;
	cout << "x || y: " << (x || y) << endl;
	cout << "! x: " << (!x) << endl;
	cout << "! y: " << (!y) << endl;

	return 0;
}