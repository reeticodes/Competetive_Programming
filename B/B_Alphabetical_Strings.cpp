
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

int solve()
{
  string s;
  cin >> s;
  int n = s.length();
  int aidx = -1;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'a' && aidx != -1)
      return 0;
    if (s[i] == 'a' && aidx == -1)
      aidx = i;
  }

  if (aidx == -1)
    return 0;

  //left 0 right 1

  int i = aidx;
  int cnt = 1;
  char c = 'b';
  int l = aidx - 1, r = aidx + 1;

  while (l >= 0 || r < n)
  {
    if (l >= 0 && s[l] != c && r < n && s[r] != c)
      return 0;
    else if (l < 0 && r < n && s[r] != c || l >= 0 && r >= n && s[l] != c)
      return 0;
    if (cnt == n)
      return 1;
    // debug("l", l);
    // debug("r", r);
    if (l >= 0 && s[l] == c)
    {
      l--;
      cnt++;
      c++;
    }
    if (r < n && s[r] == c)
    {
      r++;
      cnt++;
      c++;
    }
  }

  if (cnt == n)
    return 1;
  return 0;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int f = solve();
    if (f)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}