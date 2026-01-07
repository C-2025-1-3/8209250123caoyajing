#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool is_valid(double side1, double side2, double side3);
double area(double side1, double side2, double side3);

bool is_valid(double side1, double side2, double side3) {
    return (side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1) &&
        (side1 > 0) && (side2 > 0) && (side3 > 0);
}

double area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2.0;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    double a, b, c;
    cout << "请输入三角形的三边长：";
    cin >> a >> b >> c;

    if (is_valid(a, b, c)) {
        cout << fixed << setprecision(2);
        cout << "三角形面积为：" << area(a, b, c) << endl;
    }
    else {
        cout << "输入的三边无法构成合法三角形！" << endl;
    }

    return 0;
}