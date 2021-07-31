#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<int> arr1(n), arr2(n), diff(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
    //cout << arr1[i] << " ";
  }

  for (int i = 0; i < n; i++)
  {
    cin >> arr2[i];
    //cout << arr2[i] << " ";
  }

  int tot = 0;
  for (int i = 0; i < n; i++)
  {
    diff[i] = arr1[i] - arr2[i];
    if (diff[i] != 0)
      tot += diff[i];
    //cout << diff[i] << " ";
  }

  if (tot != 0)
  {
    cout << -1 << endl;
    return;
  }

  vector<vector<int>> res;
  for (int i = 0; i < n; i++)
  {
    if (diff[i] == 0)
      continue;
    while (diff[i] != 0)
    {
      for (int j = 0; j < n; j++)
      {
        if (diff[i] == 0 || diff[j] == 0)
          continue;

        if (diff[i] > 0 && diff[j] < 0)
        {
          diff[i]--;
          diff[j]++;
          res.push_back({i + 1, j + 1});
        }
        else if (diff[i] < 0 && diff[j] > 0)
        {
          diff[j]--;
          diff[i]++;
          res.push_back({j + 1, i + 1});
        }
      }
    }
  }
  // for (int i = 0; i < n; i++)
  //   cout << diff[i] << " ";
  // cout << endl;
  cout << res.size() << endl;
  for (vector<int> i : res)
  {
    cout << i[0] << " " << i[1] << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}