#include <iostream>
#define NUMBER 15
using namespace std;

void OneTriangle(size_t height);

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

	cout << "Enter construction option (1 and 2) = ";
	while (true)
	{
		cin >> num;
		if (num == 1 || num == 2)
			break;
		else
			cout << "Incorrect input. Please re-enter: ";
		cin.clear();
		while (cin.get() != '\n');
	}

	if (num == 1)
	{
		OneTriangle(height);
	}

	return 0;
}

void OneTriangle(size_t height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height; j++)
		{
			if (i + j >= height - 1)
			{
				cout << "# ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}