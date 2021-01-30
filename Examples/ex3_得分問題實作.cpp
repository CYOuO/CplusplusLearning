#include <iostream>
using namespace std;
int main()
{
	int a, score;
	cout << "輸入答對題數 ";
	cin >> a;
	if (a >= 1 && a <= 10)
		score = a * 6;
	else if (a >= 11 && a <= 20)
		score = 60 + (a - 10) * 2;
	else if (a >= 21 && a <= 40)
		score = 80 + (a - 20) * 1;
	else
		score = 100;
	cout << "答對題數" << a << "題"
		 << "分數為" << score << "分" << endl;
	return 0;
}
