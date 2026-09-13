#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    if ((a >= -1000) && (a <= 1000))
    {
        cout << a / b << " " << a % b << endl;
    }

    return 0;
}
