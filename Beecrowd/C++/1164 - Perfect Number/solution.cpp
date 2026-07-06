#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, num;

    while (n--)
    {
        cin >> num;
        vector<int> vec;
        int sum = 0;
        for (int kkk = 1; kkk <= ((int)sqrt(num)) + 1 ; kkk++)
        {

            if ((num / kkk) == 0)
            {
                sum += kkk;
            }
        }

        if (sum==num)
        cout<< num << "eh perfeito" << endl; 
        else
            cout << num << "eh perfeito" << endl;
    }

    return 0;
}
