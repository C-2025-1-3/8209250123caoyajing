#include<iostream>
using namespace std;
int main()
{
	char cha;
	cout << "请输入一个字符：";
	cin >>cha;
	if (cha >= 'a' && cha <= 'z') {
		char upper = cha - 32;
		cout << "转化为大写：" << upper << endl;
	}
	else {
		int next = static_cast<int>(cha) + 1;
		cout << "后继字符的ASCII码值为：" << next << endl;
	}
	return 0;
}