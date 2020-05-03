#include <iostream>
#define NUMBER 15
using namespace std;

int main()
{
	cout << "MARIO.\n";
	int height, num;

	cout << "Enter pyramid height (max =" << NUMBER << "). = \n";
	while (true)
	{
		cin >> height;
		if (!cin || height > NUMBER || height <= 0)
		{
			cout << "Incorrect input. Please re-enter: ";
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			break;
	}


	return 0;
}