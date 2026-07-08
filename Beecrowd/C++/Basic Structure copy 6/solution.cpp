#include <bits/stdc++.h>
using namespace std;

int main()
{

    double n;
    cin >> n;
    vector<double> vec;
    vec.push_back(n);

    int i = 99;

    while (i--)
    {
        vec.push_back(n / 2.0);
    }

    for (auto x : vec)
    {
        cout << x << endl;
    }

    return 0;
}
