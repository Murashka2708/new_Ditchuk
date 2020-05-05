#include <iostream>
using namespace std;

bool CheckMoney(float money) {
	if (money < 0 || !cin) {
		cin.clear();
		while (cin.get() != '\n');
		return false;
	}
	return true;
}

int ConvertMoney(float money) {
	return money *= 100;
}

int Count25(int& money) {
	int counter = money / 25;
	money = money % 25;
	return counter;
}

int Count10(int& money) {
	int counter = money / 10;
	money = money % 10;
	return counter;
}

int Count5(int& money) {
	int counter = money / 5;
	money = money % 5;
	return counter;
}

int Count1(int& money) {
	int counter = money / 1;
	money = 0;
	return counter;
}

int main()
{
	float money;

	do {
		cout << "Use the format 0.00\n";
		cout << "Enter money: ";
		cin >> money;
	} while (!CheckMoney(money));

	return 0;
}