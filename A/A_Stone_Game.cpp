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
  int n, i;
  cin >> n;
  vector<int> arr(n);
  int mn = INT_MAX, mx = INT_MIN, mxi = -1, mni = -1;
  int ans = 0;
  rep(i, 0, n)
  {
    cin >> arr[i];
    if (arr[i] > mx)
    {
      mx = arr[i];
      mxi = i;
    }
    if (arr[i] < mn)
    {
      mn = arr[i];
      mni = i;
    }
  }
  ans += min(mxi, mni);
  debug("ans", ans);
  if (mni < mxi)
  {
    mxi = n - mxi;
    debug("mxi", mxi);
    int strt = n - mni + 1, end = n - mni;
    ans += min(mxi, end - mxi);
  }
  cout << ans + 2 << endl;
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