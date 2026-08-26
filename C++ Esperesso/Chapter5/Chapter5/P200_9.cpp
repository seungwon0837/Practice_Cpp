#include <iostream>

using namespace std;


class Employee
{
private:
	string name;
	string phone;
	int salary;

public:
	void set_name() { cin >> name; }
	void set_phone() { cin >> phone; }
	void set_salary() { cin >> salary; }

	string get_name() { return name; }
	string get_phone() { return phone; }
	int get_salary() { return salary; }

	void report()
	{
		cout << "Name : " << name << endl << "Phone number : " << phone << endl;
		cout << "Salary : " << salary << endl;
	}

	Employee() : name("James"), phone("010-3400-0837"), salary(3000){}
};

int main()
{
	Employee *E1 = new Employee;
	E1 -> report();
	delete E1;
}