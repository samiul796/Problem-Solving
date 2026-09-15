#include <bits/stdc++.h>
using namespace std;

int main()
{

  int size;
  cin >> size;
  vector<pair<int, int>> vec(size);

  for (int i = 0; i < vec.length(); i++)
  {

    vec[i].first = i;
    cin >> vec[i].second;
  }
  sort(vec.begin(), vec.end());
  cout << vec[0].first << endl;

  return 0;
}
