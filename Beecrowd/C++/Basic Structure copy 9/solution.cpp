#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;

        for (int kkk = 2; kkk < num; kkk++)
        {

            if ((num % kkk) == 0)
            {
                cout << num << " nao eh perfeito" << endl;
            }
        }

        if (sum == num)
            cout << num << " eh perfeito" << endl;
        else
            cout << num << " nao eh perfeito" << endl;
    }

    return 0;
} 
