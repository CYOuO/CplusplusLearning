#include <iostream>
using namespace std;

int main()
{
	int a, b, c, n, z;
	cout << "請輸入一個正整數";
	cin >> n;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
			for (c = 1; c <= n; c++)
				if (a * a + b * b == c * c && a < b && b < c)
				{
					cout << a << "," << b << "," << c << "\n";
					z += 1;
				}
	}
	cout << "組數為" << z << "組";

	return 0;
}
