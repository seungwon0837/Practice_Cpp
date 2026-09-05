#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


class Student
{
private:
	char *name;
	int age;

public:
	Student(const char *p, int n)
	{
		cout << "메모리 할당" << endl;
		name = new char[strlen(p) + 1];
		strcpy(name, p);
		age = n;
	}
	~Student() 
	{
		cout << "메모리 소멸" << endl;
		delete[] name;
	}

	Student& operator=(const Student& s1)
	{
		delete[] name;
		// 얕은 복사 문제를 방지하기 위해 미리 지우고, 새롭게 복사해오기.
		name = new char[strlen(s1.name) + 1];
		strcpy(name, s1.name);
		age = s1.age;
		return *this;

	}


};	

int main()
{
	Student s1("홍길동", 20);
	Student s2("김첨지", 20);
	s1 = s2;

}