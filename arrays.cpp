#include <iostream>
using namespace std;

int main() {
	int random[10];

	cout << "Here are your numbers" << endl;
	for (int i = 0; i < 10; i++)
		random[i] = rand() % 51 + 50;
	for (int i = 0; i < 10; i++)
		cout << random[i] << endl;
	cout << endl << endl;

	string name[5];
	bool hascoolfriend = false;
	cout << "Enter 5 friends names" << endl;
	cin >> name[0];
	cin >> name[1];
	cin >> name[2];
	cin >> name[3];
	cin >> name[4];

	cout << "here are your friends names:" << endl;
	for (int j = 0; j < 5; j++)
		cout << name[j] << endl;
	cout << endl << endl;
	for (int j = 0; j < 5; j++)
		if (name[j] == "alejandro")
			hascoolfriend = true;
	if (hascoolfriend)
		cout << "you have cool friends" << endl;
	else 
		cout << "you need new friends" << endl;
}
