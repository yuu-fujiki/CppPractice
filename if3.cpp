#include <iostream>
using namespace std;

void Points()
{
	int a;
	cout << "what score? > ";
	cin >> a;

	cout << a * (0 <= a && a <= 100) << endl;
}
int main()
{
	Points();
	return 0;
}

