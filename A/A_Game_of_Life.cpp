#include <bits/stdc++.h>
using namespace std;
//*************************MACROS*************************
#define endl "\n"
#define MOD = 1000000007

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;
//*************************MACROS*************************

void solve()
{
  int n, m;
  string s, k;
  cin >> n >> m >> s;
  k = s;

  int ones = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      ones = 1;
      break;
    }
  }
  if (ones == 0)
  {
    cout << s << endl;
    return;
  }

  while (m--)
  {
    int changed = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '1')
        continue;
      if (i > 0 && i < n - 1 && s[i - 1] == '1' && s[i + 1] == '1')
        continue;
      if (i > 0 && s[i - 1] == '1')
        k[i] = '1';
      else if (i < n - 1 && s[i + 1] == '1')
        k[i] = '1';
      changed = 1;
    }
    if (!changed)
      break;
    s = k;
  }
  cout << k << endl;
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