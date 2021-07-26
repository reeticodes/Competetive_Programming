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
int helper(int idx, int f, int s, int k1, int k2, string s1)
{
  if (idx == 10)
    return 0;
  if (f + k1 < s)
    return 0;
  if (s + k2 < f)
    return 0;

  if (s1[idx] == '1')
  {
    if (idx % 2)
    {
      s++;
      k2--;
    }
    else
    {
      f++;
      k1--;
    }
    return 1 + helper(idx + 1, f, s, k1, k2, s1);
  }
  else if (s1[idx] == '0')
  {
    if (idx % 2)
      k2--;
    else
      k1--;
    return 1 + helper(idx + 1, f, s, k1, k2, s1);
  }
  else
  {
    if (idx % 2)
      return 1 + min(helper(idx + 1, f + 1, s, k1 - 1, k2, s1), helper(idx + 1, f, s, k1 - 1, k2, s1));
    else
      return 1 + min(helper(idx + 1, f, s + 1, k1, k2 - 1, s1), helper(idx + 1, f, s, k1, k2 - 1, s1));
  }
}
void solve()
{
  string s;
  cin >> s;
  cout << helper(0, 0, 0, 5, 5, s) << endl;
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