#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三边：";
	//为啥报错cin >> a>> '\n'>> b >> '\n' >> c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b == c || c == a) { cout << "该三角形为等腰三角形"; /*直接打；报错，先打<<endl;再删去打；就不报错*/ }
		else { cout << "该三角形非等要腰三角形"<<endl; }
		return 0;
	}
}