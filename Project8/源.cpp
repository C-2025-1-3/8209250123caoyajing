#include<iostream>
using namespace std;
int main()
{
	char op;
	int a, b, c;
	cout << "请输入运算符（在+，-，*，/，%中选择）：" << endl;
	cin >> op;
	cout << "请输入数字1，数字2：" << endl;
	cin >> a >> b;
	cout << "the anwser is:";
		switch (op)
		{
		case '+':
			c = a + b;
			cout << c;
			break;
		case '-':
			c = a - b;
			cout<<c;
			break;
		case'*':
			c = a * b;
			cout << c;
			break;
		case'/':
			if (b != 0)
			{
				c = a / b;
				cout << c;
			}
			else cout << "wrong";
			break;
		case'%':
			c = a % b;
			cout << c;
			break;
		default:
			cout << "运算符非法";
			break;
		}
		cout << endl;
	return 0;
}