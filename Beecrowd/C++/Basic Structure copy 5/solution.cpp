#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (n--)
    {
        int Sheldon, raj;
        string word1, word2, array1[5] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
        cin >> word1 >> word2;
        for (int i = 0; i < n; i++)
        {
            if (word1 == array1[i])
            {
                Sheldon = i;
            }

            if (word2 == array1[i])
            {
                raj = i;
            }
        }

        if (Sheldon == raj){
            cout << "Caso #" << n << "De novo!" << endl ;
        }
        else if (Sheldon>raj)
        {
            
        }




    }

    return 0;
}
