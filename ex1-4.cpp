#include <iostream>
using namespace std;

int d4() {
	double num1, num2;
	char op;

	// ��ʾ�û���������ֵ
	cout << "������ĵ�һ����ֵ��" << endl;
	cin >> num1;

	cout << "�������������ţ�" << endl;
	cin >> op;

	cout << "������ĵڶ�����ֵ��" << endl;
	cin >> num2;

	// �����������ִ����Ӧ����
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
				cout << "��������Ϊ0" << endl;
			break;
		default:
			cout << "����������������Ƿ�����" << endl;
			break;
	}

	return 0;
}