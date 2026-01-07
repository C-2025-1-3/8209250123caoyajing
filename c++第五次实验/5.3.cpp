#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void input() {
		cout << "请输入长方柱的长、宽、高：";
		cin >> length >> width >> height;
	}
	double volume() {
		return length * width * height;
	}
	void outputvolume(int index) {
		double vol = volume();
		cout << "第" << index << "个长方柱的体积为：" << vol << endl;
	}
};
int main() {
	Cuboid cub1, cub2, cub3;
	cub1.input();
	cub2.input();
	cub3.input();
	cub1.outputvolume(1);
	cub2.outputvolume(2);
	cub3.outputvolume(3);
	return 0;
}