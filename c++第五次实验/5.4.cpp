#include<iostream>
using namespace std;
class Student {
public:
	int id;
	int score;
	Student(int i=0,int s=0):id(i),score(s){}
};
void max(Student* p,int n) {
	int maxScore = p->score;
	int maxId = p->id;
	for (int i = 1; i < n; i++) {
		if ((p + i)->score > maxScore) {
			maxScore = (p + i)->score;
			maxId = (p + i)->id;
		}
	}
	cout << "最高成绩者学号：" << maxId << ",成绩：" << maxScore << endl;
}
int main()
{
	Student stuArr[5] = { Student(101,85) ,Student(105,86) ,Student(104,87) ,Student(109,88) ,Student(125,89) };
	max(stuArr, 5);
	return 0;
}