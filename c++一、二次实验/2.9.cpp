#include<iostream>
using namespace std;
int main() {
	double price = 0.8, totalamount,average;
	int num, totalnum = 0, loopcount = 0;
	for (num = 2; totalnum +num<= 100; num*=2)
	{
		totalnum += num;
		loopcount++;
	}
	average= (totalnum * price)/ loopcount;
	cout << "每天平均花" << average<<endl;

}


