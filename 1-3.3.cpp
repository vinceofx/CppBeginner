/*
*1.3.3 �Ƚ������
�Ƚ���������ڱȽ�����ֵ�������ز���ֵ��true��false���������ıȽ������������

==�����ڣ�
!=�������ڣ�
<��С�ڣ�
>�����ڣ�
<=��С�ڵ��ڣ�
>=�����ڵ��ڣ�
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