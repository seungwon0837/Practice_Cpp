#include <iostream>
#include <string>
using namespace std;
const int max_friends = 5;

class MyWorld
{
private:
	string name;
	int popularity;	// 친구 수에 비례.
	MyWorld* friends[max_friends];

};