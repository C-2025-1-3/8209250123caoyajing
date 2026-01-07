/*此代码应有如下改进：
* 可以确保用户必须输入正数
* 控制了体积的输出精度
*同时呈现请输入r和h
*/



#include <iostream>
#include<iomanip>
#define PI 3.1415926
using namespace std;

int main()
{
	double r, h, V;
	cout << "请输入圆锥底的半径：" ;
	cin >> r;
	cout << "\n";
	cout << "请输入圆锥底的高：";
	cin >> h;
	cout << "\n";
	V= (1.0 / 3.0) * PI * r * r * h;
	cout << "圆锥底的体积为："<<V<<endl;
	return 0;
}

