#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "輸入月份: ";
	cin >> a;
	switch (a)
	{
	case 3 ... 5:
		cout << "春季" << endl;
		break;
	case 6 ... 8:
		cout << "夏季" << endl;
		break;
	case 9 ... 11:
		cout << "秋季" << endl;
		break;
	case 1 ... 2:
	case 12 ... 12:
		cout << "冬季" << endl;
		break;
	default:
		cout << "輸入錯誤" << endl;
	}
	return 0;
}
