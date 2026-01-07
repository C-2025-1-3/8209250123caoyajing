//main.cpp                      
#include <iostream>             
#include"student.h"
using namespace std;
int main()
{
	Student stud;            
	int num;
	char name[20];
	char sex;
	cout << "请输入第一个学生的学号、姓名、性别：" << endl;
	cin >> num >> name >> sex;
	stud.set_value(num, name, sex);
	cout << "第一个学生的信息：" << endl;
	stud.display();
	return 0;
}
