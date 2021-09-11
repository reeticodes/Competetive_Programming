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
void draw(vector<vector<char>> &m, int n)
{
  for (int i = 0; i < m.size(); i++)
    for (int j = 0; j < m[0].size(); j++)
    {
      if (i == j)
        m[i][j] = 'X';
      else if (i == n || j == n)
        m[i][j] = '=';
    }
}
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<vector<char>> match(n, vector<char>(n, '.'));
  int one = 0, two = 0;
  for (int i = 0; i < n; i++)
    if (s[i] == '1')
      one++;
    else
      two++;

  if (one == two)
  {
    cout << "NO" << endl;
    return;
  }

  for (int x = 0; x < n; x++)
  {
    if (s[x] == '1')
      draw(match, x);
    else
    {
      bool flag = false;
      for (int i = 0; i < n; i++)
      {
        if (x != i && s[i] != '1' && match[x][i] != '-' && match[x][i] != '=')
        {
          match[x][i] = '+';
          match[i][x] = '-';
          flag = true;
          break;
        }
      }
      if (!flag)
      {
        cout << "NO" << endl;
        return;
      }
    }
  }
  cout << "YES" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        match[i][j] = 'X';
      else if (match[i][j] == '.')
        match[i][j] = '=';
      cout << match[i][j];
    }

    cout << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--)
  {

    solve();
  }
  return 0;
}