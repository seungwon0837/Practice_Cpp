#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string name;
	int age;
public:
	string breed;

	void set_name() { cin >> name; }
	void set_age() { cin >> age; }
	void set_breed() { cin >> breed; }

	string get_name() { return name; }
	int get_age() { return age; }
	string get_breed() { return breed; }

	Dog(string n, int a): name(n), age(a), breed("") {}
	Dog(string n, string b, int a): name(n),breed(b), age(a)  {}

	void get_info()
	{
		cout << "Name : " << name << endl;
		cout << "Breed : " << breed << endl;
		cout << "Age : " << age << endl << endl <<endl;
	}

};


int main()
{
	Dog D1("Mandu", 25);
	Dog D2("Bear", "Bulldog", 28);

	D1.get_info();
	D2.get_info();


}