#include <bits/stdc++.h>
using namespace std;

int main()
{

    double a, b, c;
    cin >> a >> b >> c;

    while (cin >> a >> b >> c)
    {
        if (a == 0)
            break;

        double res = (a * b * 100) / c;
        cout << (int)sqrt(res) << endl;
    }
    return 0;
}
