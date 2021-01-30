#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "請輸入西元年(大於1911)：";
    cin >> a;
    cout << "西元" << a << "年為民國" << a - 1911 << "年唷" << endl;

    return 0;
}
