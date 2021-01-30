#include <iostream>
using namespace std;

int main()
{
	int n = 10, a[n] = {2, 23, 34, 57, 76, 88, 90, 94, 106, 136};
	int mid, key, L = 0, R = n - 1;

	cin >> key;

	while (L <= R)
	{

		mid = (L + R) / 2;
		if (a[mid] == key)
		{
			cout << "在索引" << mid;
			break;
		}
		else if (a[mid] > key)
		{
			R = mid - 1;
		}
		else
			L = mid + 1;
	}

	if (L > R)
		cout << "沒搜尋到資料~ " << endl;

	return 0;
}
