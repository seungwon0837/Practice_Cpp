#include <iostream>
using namespace std;

class MyArray
{
	friend ostream& operator << (ostream&, const MyArray&);
private:
	int* data;
	int size;

public:
	MyArray(int size = 10);
	~MyArray();
	int getSize() const;
	MyArray& operator=(const MyArray& a);
	int& operator[](int i);
};

MyArray::MyArray(int s)
{
	size = (s > 0 ? s : 10); // 0보다 클 때는 s, 아니면 10으로 고정한다. (10은 디폴트 사이즈)
	data = new int[size];	// 배열 선언
	for (int i = 0; i < size; i++){	data[i] = 0;}	// 내부 0으로 초기화
}

MyArray:: ~MyArray(){	delete[]data;	data = NULL;	}

MyArray& MyArray::operator=(const MyArray& a)
// 앞에 쓰이는 &는 반환형이고, 뒤에 쓰이는 &는 참조로 읽는다. 
{
	if (&a != this)
	{
		delete[] data;
		size = a.size;
		data = new int[size];

	}
}

int main()
{
	;
}