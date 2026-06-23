#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[2000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int minimum = a[1] - a[0];

    for (int i = 1; i < n; i++)
    {
        int difference = a[i] - a[i - 1];

        if (difference < minimum)
        {
            minimum = difference;
        }
    }

    cout << minimum << endl;

    return 0;
}

