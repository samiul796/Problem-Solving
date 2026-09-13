#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    while (cin >> n && n != 0)
    {
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                if (k == 0 || k == (n - 1) || l == 0 || l == (n - 1))
                {
                    cout << "\t" << 1;
                }
                else
                {
                    cout << "\t" << 2;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
