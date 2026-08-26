#include <iostream>
using namespace std;

class Product
{
private:
	string name;
	int price;
	int assessment;

public:
	void set_name() { cin >> name; }
	void set_price() { cin >> price; }
	void set_assessment() { cin >> assessment; }

	void get_info()
	{
		cout << "Name : "; set_name();
		cout << "Price : "; set_price();
		cout << "Rating : "; set_assessment();
	}


	Product():name("PC"), price(300), assessment(9){}

	string get_name() const{ return name; }
	int get_price() const{ return price; }
	int get_assessment() const{ return assessment; }



	const void print()
	{
		cout << "Name : " << name <<endl;
		cout << "Price : " << price << endl;
		cout << "Rating : " << assessment << endl;
	}

	bool is_better(const Product& b)
	{
		bool better;
		int rating_a = this -> assessment;
		int rating_b = b.get_assessment();

		if (rating_a > rating_b) { better = true; cout << "This is better"<<endl; }
		else { better = false; cout << "That is better" << endl;}
		return better;
	}
};


int main()
{
	Product A;
	Product B;
	A.print();
	B.get_info();
	A.is_better(B);


}