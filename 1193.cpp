#include<iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;
	if (X >= 1 && X <= 10000000)
	{
		int i = 1;
		int j = 1;
		int A = 0;
		for (; i <= X; i += j)
		{
			A = i;
			if (i != 1) { j++; }

		}
		int c = X - A;
		if (j % 2 == 0)
			cout << (1 + c) << "/" << (j - c) << endl;
		else if (j % 2 != 0)
			cout << (j - c) << "/" << (1 + c) << endl;
	}

	return 0;
}
