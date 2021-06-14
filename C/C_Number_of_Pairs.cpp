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
  int n, i, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  rep(i, 0, n)
          cin >>
      a[i];
  sort(a.begin(), a.end());
  int lo = 0, hi = n - 1;
  while (lo < n && a[lo] + a[hi] < l)
    lo++;
  int loCount = lo;
  while (a[loCount] + a[hi] <= r)
    loCount++;
  int hiCount = hi;
  while (hi > 0 && a[hiCount] + a[lo] >= l)
    hiCount--;

  // loCount--;hiCount++;

  int ans = (hi - hiCount + 1) * 2 + (loCount - lo + 1) * 2;

  cout << ans << endl;
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