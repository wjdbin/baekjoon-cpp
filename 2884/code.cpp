#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cin >> a >> b;
    
    if(a == 0)
    {
        if(b >= 45)
        {
            cout << a << ' ' << b - 45;
        }
        else
        {
            cout << 23 << ' ' << b + 15;
        }
    }
    else if(b - 45 < 0)
    {
        cout << a - 1 << ' ' << b + 15;
    }
    else
    {
        cout << a << ' ' << b - 45;
    }
    
    return 0;
}
