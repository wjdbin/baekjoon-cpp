#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a * (b % 10) << "\n";        // 일의 자리
    cout << a * (b / 10 % 10) << "\n";   // 십의 자리
    cout << a * (b / 100) << "\n";       // 백의 자리
    cout << a * b << "\n";               // 전체 곱

    return 0;
}
