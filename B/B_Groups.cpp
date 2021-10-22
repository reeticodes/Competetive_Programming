#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define nline "\n"
#define MOD 1000000007
#define ll long long
#define PI 3.141592653589793238462

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << "\n";
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

//*************************HELPER FUNCTIONS*************************

string dectobin(int n)
{
  return bitset<8>(n).to_string();
}
bool ispoweroftwo(long n)
{
  return n && !(n && (n - 1));
}
void init_code()
{

#ifndef Reeti10
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********************************************************************

void solve();

int main()
{
  // init_code();
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

void solve()
{
  int n, m;

  cin >> n;
  m = 5;
  if (n % 2)
  {
    cout << "NO" << nline;
    return;
  }

  vector<vector<int>> arr(n, vector<int>(m));
  unordered_map<int, vector<int>> daystostu;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> arr[i][j];
      if (arr[i][j])
      {
        daystostu[j].push_back(i);
      }
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {

      if (daystostu.find(i) == daystostu.end() || daystostu.find(j) == daystostu.end())
        continue;
      auto x = daystostu[i], y = daystostu[j];
      if (x.size() < (n / 2) || y.size() < (n / 2))
        continue;

      vector<int> vis(n, 0);

      for (auto v1 : x)
      {
        vis[v1] = 1;
      }
      for (auto v2 : y)
      {
        vis[v2] = 1;
      }
      bool found = true;
      for (int k : vis)
        if (k == 0)
        {
          found = false;
          break;
        }
      if (found)
      {
        cout << "YES" << nline;
        return;
      }
    }
  }

  cout << "NO" << nline;
}
