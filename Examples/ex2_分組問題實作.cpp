#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "請輸入座號 n = ";
	cin >> n;

	cout << "所在的組別是 " << (n - 1) / 4 + 1 << "組 " << endl;

	return 0;
}
