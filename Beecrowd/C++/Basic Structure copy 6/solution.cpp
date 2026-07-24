#include <bits/stdc++.h>
using namespace std;

int main()
{

    double a, b, c;
    cin >> a >> b >> c;

    while ((cin >> a >> b >> c) && (a != 0) && (b != 0) && (c != 0))
    {
        double res = (a * b * 100) / c;
        int finalans = (int)sqrt(res);
        cout << finalans << endl;
    }

    return 0;
}
