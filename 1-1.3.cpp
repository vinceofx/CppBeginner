/*
*2.1 C++中的数据类型
C++ 提供了多种数据类型，用于存储不同种类的数据。常见的基本数据类型包括：

整数类型（整型）：
int：用于存储整数。
short：比 int 占用更少的内存。
long：可以存储更大的整数。
long long：用于存储非常大的整数。

浮点类型：
float：用于存储单精度小数。
double：用于存储双精度小数（比 float 精确）。

字符类型：
char：用于存储单个字符。

布尔类型：
bool：用于存储布尔值，true（真）或 false（假）。
无符号类型：可以声明无符号整型（unsigned），它们只能存储非负值，适用于只需要正数的情况。
*/

#include <iostream>
using namespace std;

int a3() {
	// 整数类型
	int a = 10;
	short b = 10;
	long c = 456456456;

	// 浮点类型
	float d = 1.5; // 单精度（保留小数点后一位）
	double e = 3.14; // 双精度（保留小数点后两位）

	// 字符类型
	char f = 'F'; // 短字符类型，只能用于储存单个字符
	string g = "三番四复"; // 字符串类型，用于存储多个字符

	// 布尔类型
	bool h = false; // 假（显示为"0"）
	bool i = true; // 真（显示为"1"）

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;
	cout << h << endl;
	cout << i << endl;

	return 0;
}