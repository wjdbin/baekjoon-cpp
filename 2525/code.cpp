#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b; // 현재 시각 (시, 분)
    cin >> c;      // 요리하는 데 필요한 시간 (분)

    // 1. 분에 요리 시간을 모두 더함
    b += c;

    // 2. 60분이 넘어가는 만큼 시(hour)에 추가 (몫)
    a += b / 60;

    // 3. 남은 분은 60으로 나눈 나머지로 설정
    b %= 60;

    // 4. 24시가 넘어가면 0시부터 다시 시작하도록 처리
    a %= 24;

    cout << a << " " << b;
    
    return 0;
}
