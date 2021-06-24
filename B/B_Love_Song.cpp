#include <bits/stdc++.h>
using namespace std;
//*************************MACROS*************************
#define endl "\n"
#define MOD 1000000007
#define ll long long

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;

//*************************MACROS*************************
void createdp(set<char> unique, string s, vector<vector<int>> &dp, int n, int m)
{
  vector<char> v(unique.begin(), unique.end());
  int i;
  //debugarr(v, i, v.size());
  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < m + 1; j++)
    {
      if (v[i - 1] == s[j - 1])
      {
        char c = v[i - 1];
        int x = v[i - 1] - 'a' + 1;
        dp[i][j] = x + dp[i][j - 1];
      }
      else
        dp[i][j] = dp[i][j - 1];
    }
  }
}
void solve()
{
  int p, q;
  cin >> p >> q;
  string s;
  cin >> s;
  set<char> unique;
  for (char c : s)
  {
    unique.insert(c);
  }
  int n = unique.size();
  int m = s.length();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  createdp(unique, s, dp, n, m);
  // for (int i = 1; i < n + 1; i++)
  // {
  //   for (int j = 1; j < m + 1; j++)
  //   {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  while (q--)
  {
    int x, y;
    cin >> x >> y;
    int ysum = 0, xsum = 0;
    for (int i = 1; i < n + 1; i++)
    {
      if (x == 1 && y == m)
      {
        ysum += dp[i][y];
        continue;
      }

      if (x != 1)
        ysum += dp[i][y] - dp[i][x - 1];
      if (x == 1)
        ysum += dp[i][y];
    }
    cout << ysum << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  //cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
