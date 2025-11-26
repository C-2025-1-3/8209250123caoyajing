#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	cout << "请输入一个数 a: ";
	cin >> a;
	if (a < 0) {
		cout << "错误：不能对负数求实数平方根！" << endl;
		cout << "复数解为: ±" << sqrt(-a) << "i" << endl;
		return 1;
	}
}