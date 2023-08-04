#include <iostream>

using namespace std;

bool Varkentje(int a, int b)
{
	if (a == 30 || b == 30)
	{
		return true;
	}
	else if (a + b == 30)
	{
		return true;
	}

	return false;
}

int main()
{
	int Menno = 15;
	int Sylvia = 20;

	bool Uitkomst = Varkentje(Menno, Sylvia);

	cout << Uitkomst << endl;

	return 0;
}