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

void solve()
{
  string s, t;
  cin >> s >> t;
  int n = s.length(), m = t.length();

  int found = false;
  for (int i = 0; i < n; i++)
  {
    if (found)
      break;
    if (s[i] != t[0])
      continue;
    int covered = 0;

    for (int j = i; j < n; j++)
    {
      if (found)
        break;
      if (s[j] != t[covered])
        break;
      covered++;
      if (covered == m)
      {
        found = true;
        break;
      }

      int left = m - covered;
      int here = j;
      if (here >= left)
      {
        string rev = s.substr(here - left, left);
        reverse(rev.begin(), rev.end());
        string leftstr = t.substr(covered, left);
        if (rev == t.substr(covered, left))
        {
          found = true;
          break;
        }
      }
    }
  }

  if (found)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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