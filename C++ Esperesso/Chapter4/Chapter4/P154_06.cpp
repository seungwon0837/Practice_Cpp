#include <iostream>
#include <string>
using namespace std;

class Check
{
private:
	string item;
	int model;

public:

	void check_item(string label)
	{
		if (isalpha(label[0]) && isalpha(label[1]))
		{
			item = label.substr(0, 2);
			cout << "Item : " << item <<endl;
		}

		else { cout << "Item not found" << endl; }
	}


	void check_model(string label)
	{
		bool valid = true;

		for (int i = 0; i < 4; i++)
		{
			if(isdigit(label[i+2])){}
			else { cout << "Model not found" << endl; valid = false;  break; }
		}
	
		if (valid)
		{
			model = stoi(label.substr(2, 4));
			cout << "Model : " << model << endl;
		}
	}
	
};



string get_label()
{
	string label;
	cin >> label;

	if (label.length() != 6)
	{ 
		cout << "Try again" << endl;
		return get_label(); 
	}
	else return label;
}

int main()
{	string label = get_label();

	Check c;
	c.check_item(label);
	c.check_model(label);
}