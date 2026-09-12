#include <bits/stdc++.h>
using namespace std;

int main()
{

    int number;

    cin >> number;
    int arr[number, number];
    for (int i = 0; i < number; i++)
    {
        for (int ii = 0; ii < number; ii++)
        {

            if (i == ii)
            {
                arr[i, ii] == 1;
            }
            else if ((ii - i) == number)
            {
                arr[i, ii] = 2;
            }
            else
            {
                arr[i, ii] = 3;
            }
        }
    }
    for (int i = 0; i < number; i++)
    {
        for (int ii = 0; ii < number; ii++)
        {

            cout << arr[i, ii];
        }
    }
    return 0;
}
