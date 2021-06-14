#include <bits/stdc++.h>
using namespace std;
// Policy based data structure
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define ll long long int
#define yes              \
  cout << "YES" << endl; \
  return;
#define no              \
  cout << "NO" << endl; \
  return;
#define inf 1e18
#define mod 1000000007
#define minpq priority_queue<ll, vector<ll>, greater<ll>>
#define maxpq priority_queue<ll>
#define rep(i, k, n) for (int i = k; i < n; ++i)
#define repr(i, k, n) for (int i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;
//********MACROS********

void solve()
{
  int n, m;
  cin >> n >> m;
  char arr[n][m];
  int i, j;
  rep(i, 0, n)
          rep(j, 0, m)
              cin >>
      arr[i][j];
  char arr1[n][m];
  char arr2[n][m];

  rep(i, 0, n)
      rep(j, 0, m)
  {
    if ((i + j) % 2 == 0)
      arr1[i][j] = 'R';
    else
      arr1[i][j] = 'W';
  }
  rep(i, 0, n)
      rep(j, 0, m)
  {
    if ((i + j) % 2 == 0)
      arr2[i][j] = 'W';
    else
      arr2[i][j] = 'R';
  }

  bool is_arr1 = true, is_arr2 = true;
  rep(i, 0, n)
      rep(j, 0, m)
  {
    if (arr[i][j] == '.')
      continue;
    if (arr[i][j] != arr1[i][j])
    {
      is_arr1 = false;
      break;
    }
  }

  rep(i, 0, n)
      rep(j, 0, m)
  {
    if (arr[i][j] == '.')
      continue;
    if (arr[i][j] != arr2[i][j])
    {
      is_arr2 = false;
      break;
    }
  }

  if (!is_arr1 && !is_arr2)
  {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
  if (is_arr1)
  {
    rep(i, 0, n)
    {
      rep(j, 0, m)
              cout
          << arr1[i][j];
      cout << endl;
    }
    return;
  }
  rep(i, 0, n)
  {
    rep(j, 0, m)
            cout
        << arr2[i][j];
    cout << endl;
  }
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    // cout << "Case #" << t + 1 << ": ";
    solve();
  }
  return 0;
}
