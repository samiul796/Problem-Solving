#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (n--)
    {
        int Sheldon, raj;
        //  scissors ,paper, rock , lizard ,Spock
        string word1, word2, array1[5] = {"pedra", "papel", "tesoura", "lagarto", "Spock"}; // rock, paper, scissors, lizard and Spock
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

        if (Sheldon == raj)
        {
            cout << "Caso #" << n << "De novo!" << endl;
        }
        else if (Sheldon > raj)
        {
            cout << "Caso #" << n << "Bazinga!" << endl;
        }
        else
        {
            cout << "Caso #" << n << "Raj trapaceou!" << endl;
        }
    }

    return 0;
}
