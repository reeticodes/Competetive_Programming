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
vector<vector<int>> dp;
int MaximumPathUtil(int i, int j, vector<vector<int>> &grid)
{
  // Base condition
  if (i == 0 || j == 0)
    return 0;

  // If current subproblem is already computed,
  // we simply return its result from the dp table
  if (dp[i][j] != -1)
    return dp[i][j];

  // Computing the current subproblem and
  // store the result in the dp table for future use
  return dp[i][j] = max(MaximumPathUtil(i, j - 1, grid), MaximumPathUtil(i - 1, j, grid)) +
                    grid[i - 1][j - 1];
}

void solve()
{
  int n = 2;
  int m;
  cin >> m;

  // vector<vector<int>> mat(n + 100, vector<int>(m + 100, 0));
  int mat[n][m];

  //cout << mat.size() << " " << mat[0].size() << endl;
  int sum = 0;
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < m; j++)
    {
      //cout << i << " " << j << endl;
      cin >> mat[i][j];
      //cout << i << "AFTER " << j << endl;
      sum += mat[i][j];

      //cout << mat[i][j] << " ";
    }

  int ai = 0, aj = 0;
  int ac = mat[0][0], bc = 0;
  mat[0][0] = 0;
  while (ai < n && aj < m)
  {
    // debug("mat", mat[ai][aj]);
    int r = INT_MIN, d = INT_MIN;
    if (aj + 1 < m && aj + 1 >= 0)
      r = mat[ai][aj + 1];
    if (ai + 1 < n && ai + 1 >= 0)
      d = mat[ai + 1][aj];
    if (r == INT_MIN && d == INT_MIN)
      break;
    if (r > d && aj < m)
    {

      ac += mat[ai][aj + 1];
      mat[ai][aj + 1] = 0;
      aj++;
      //debug("ac", ac);
      continue;
    }
    else if (d >= r && ai < n)

    {

      ac += mat[ai + 1][aj];
      ai++;
      mat[ai + 1][aj] = 0;
      //debug("ac", ac);
      continue;
    }
  }
  vector<vector<int>> v(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      v[i][j] = mat[i][j];
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  // cout << ac << endl;
  // dp.resize(n + 1, vector<int>(m + 1, -1));
  // cout << MaximumPathUtil(0, 0, v);
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