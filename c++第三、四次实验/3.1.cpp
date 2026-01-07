#include <iostream>
using namespace std;

int gcd(int m, int n, int& lcm) {
    int a = m, b = n;

    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    lcm = (m * n) / a;
    return a; 
}

int main() {
    int m, n, lcm_val, gcd_val;
    cout << "请输入两个自然数m和n：";
    cin >> m >> n;
    gcd_val = gcd(m, n, lcm_val);

    cout << "最大公约数：" << gcd_val << endl;
    cout << "最小公倍数：" << lcm_val << endl;

    return 0;
}