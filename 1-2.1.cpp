/*
*2.2 变量的声明与初始化
变量是存储数据的容器。你可以通过 声明（declare） 和 初始化（initialize） 来使用变量。

声明变量：
声明变量意味着告诉编译器你要使用什么类型的数据。格式如下：
*/

#include <iostream>
using namespace std;

int b() {
	// 变量的定义（声明）可以被随时修改的值
	int age = 20;
	short size = 8;
	float height = 170.5;
	double weight = 65.55;

	cout << "这是打印" << age << endl;
	return 0;
}