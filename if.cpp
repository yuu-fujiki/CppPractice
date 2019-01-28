#include <iostream>
using namespace std;

void Birthmonth()
{
	int a;
	cout << "which month is your birthday month?";
	cin >> a;

	if ( 1 <= a && a <= 12)
	{
		cout << a << endl;
	}
	else
	{
		cout << a << "is not valid" << endl;
	}
}

int main()
{
	Birthmonth();
	return 0;
}

