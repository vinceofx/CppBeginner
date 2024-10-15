/*
1.2 第一个C++程序
*/

#include <iostream>  //包含输入输出库
using namespace std;  //使用标准命名空间

/*  正常屏蔽
int main() {  //主函数入口
	cout << "Hello, World!" << endl;  //打印 Hello, World!
	return 0;  //返回０，表示程序正常退出
}
*/

int a2() {
	int age;
	cout << "请输入你的年龄";
	cin >> age; //用户输入他的年龄
	cout << "你的年龄是" << age << "岁大" << endl;
	return 0;
}