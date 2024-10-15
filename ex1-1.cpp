#include <iostream>
using namespace std;

int aaaaa() {
    int age, height, weight;

    // 输入年龄
    cout << "请输入你的年龄: ";
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清除缓冲区

    // 输入身高
    cout << "请输入你的身高(cm): ";
    cin >> height;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清除缓冲区

    // 输入体重
    cout << "请输入你的体重(kg): ";
    cin >> weight;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清除缓冲区

    // 输出结果
    cout << "欢迎你，我的朋友！你有 " << age << " 岁了。" << endl;
    cout << "你有 " << height << " cm 这么高。" << endl;
    cout << "你有 " << weight << " kg 这么重。" << endl;

    return 0;
}
