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

int main()
{

	return 0;
}