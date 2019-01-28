#include <iostream>
using namespace std;

int ChangeToShowa(int a)
{
	if(1926 <=a && a <=1989)
		return a - 1925;
	else
		return 0;
}

void Showa()
{
	int a;
	cout << "西暦を入力してください > ";
	cin >> a;

	if (ChangeToShowa(a))
		cout << ChangeToShowa(a) << endl;
	else
		cout << "その年は昭和ではありません" << endl;
}

int main()
{
	Showa();
	return 0;
}

