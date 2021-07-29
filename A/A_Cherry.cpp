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
  int n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int ans = INT_MIN;

  for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
      ans = max(ans, i * j - k * (arr[i] | arr[j]));

  cout << ans << endl;
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