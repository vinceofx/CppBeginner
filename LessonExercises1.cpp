#include <iostream>
using namespace std;

int aaaaa() {
    int age, height, weight;

    // ��������
    cout << "�������������: ";
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // ���������

    // �������
    cout << "������������(cm): ";
    cin >> height;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // ���������

    // ��������
    cout << "�������������(kg): ";
    cin >> weight;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // ���������

    // ������
    cout << "��ӭ�㣬�ҵ����ѣ����� " << age << " ���ˡ�" << endl;
    cout << "���� " << height << " cm ��ô�ߡ�" << endl;
    cout << "���� " << weight << " kg ��ô�ء�" << endl;

    return 0;
}
