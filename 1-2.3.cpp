#include <iostream>
using namespace std;

// ����1
int d() {
	const int MAX_AGE = 100; // ���峣��������һ��ʹ�á���д��ĸ������ʾ
	cout << MAX_AGE << endl;
	return 0;
}

// ����2
/*
// ʹ��#defineָ����Զ�����ų���������Ԥ����ָ��ڱ���ǰ�滻�ı���������һЩ�򵥵�ֵ��define�����С����塹����˼
// �ڸ��ӱ��ʽ��ʹ�÷��ų���ʱ�����ܻᵼ�������������Ƽ�ʹ��const���峣����

#define PI 3.14159
#define WEEK 7

int main() {
	cout << "�����Բ���ʣ������У�" << PI << endl;
	cout << "�����һ�ܣ��й̶���������" << WEEK << endl;
	return 0;
}
*/

/* ����3
#define PI 3.14159 // ʹ��define���峣����Բ���ʣ����ǹ̶�����ġ� 
const int WEEK = 7; // ʹ��const ���峣���ܣ�һ��7�졣const Ҳ��Ҫ������������

int main() {
	cout << PI << endl;
	cout << WEEK << endl;
	return 0;
}
*/