#include <iostream>
using namespace std;

int d4() {
	double num1, num2;
	char op;

	// 提示用户输入两个值
	cout << "输入你的第一个数值：" << endl;
	cin >> num1;

	cout << "输入你的运算符号：" << endl;
	cin >> op;

	cout << "输入你的第二个数值：" << endl;
	cin >> num2;

	// 根据运算符号执行相应运算
	switch (op) {
		case '+':
			cout << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 - num2 << endl;
			break;
		case '*':
			cout << num1 * num2 << endl;
			break;
		case '/':
			if (num2 != 0)
				cout << num1 / num2 << endl;
			else
				cout << "除数不能为0" << endl;
			break;
		default:
			cout << "计算出错，请检查输入是否有误" << endl;
			break;
	}

	return 0;
}