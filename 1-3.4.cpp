/*
* 1.3.4 �߼������
�߼����������ִ���߼����㣬�������߼������������

&&���߼��룩����������������Ϊtrueʱ�����Ϊtrue��
||���߼��򣩣���������һ��������Ϊtrueʱ�����Ϊtrue��
!���߼��ǣ������������Ĳ���ֵȡ����
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