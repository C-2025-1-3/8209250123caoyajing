#include<iostream>
using namespace std;
int main() {
	float x, y;
	cin >> x;
	if (x < 1 && x>0) { cout<<3.0 - 2.0*x; }
	else {
		if (x < 5 && x >= 1) { cout << 2.0/ (4 * x) + 1.0; }
		if (x < 10 && x >= 5) { cout << x * x;}
	}
	return 0;
}
