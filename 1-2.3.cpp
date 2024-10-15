#include <iostream>
using namespace std;

// 程序1
int d() {
	const int MAX_AGE = 100; // 定义常量，常量一般使用「大写字母」来表示
	cout << MAX_AGE << endl;
	return 0;
}

// 程序2
/*
// 使用#define指令可以定义符号常量。它是预处理指令，在编译前替换文本，适用于一些简单的值。define中文有「定义」的意思
// 在复杂表达式中使用符号常量时，可能会导致意外错误，因此推荐使用const定义常量。

#define PI 3.14159
#define WEEK 7

int main() {
	cout << "这个是圆周率，常数π：" << PI << endl;
	cout << "这个是一周，有固定的天数：" << WEEK << endl;
	return 0;
}
*/

/* 程序3
#define PI 3.14159 // 使用define定义常量π圆周率，这是固定不变的。 
const int WEEK = 7; // 使用const 定义常量周，一周7天。const 也许要声明变量类型

int main() {
	cout << PI << endl;
	cout << WEEK << endl;
	return 0;
}
*/