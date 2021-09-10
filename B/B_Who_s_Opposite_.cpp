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
  int a, b, c;
  cin >> a >> b >> c;
  int mx = abs(a - b) * 2;
  int max_side = max(max(a, b), c);
  // debug("mx", mx);

  int diff = (mx / 2) - 1;
  if (mx < max_side)
  {
    cout << -1 << endl;
    return;
  }
  cout << (c + diff) % mx + 1 << endl;
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