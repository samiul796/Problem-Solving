#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        double R;
        cin >> R;

        double side = (2 * R) / 5.0;
        double area = side * side;

        cout << fixed << setprecision(2) << area << endl;
    }

    return 0;
}
