#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int T = 1;
  cin >> T;
  while (T--)
  {
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    int ans = -1e18;
    for (int i = max((int)1, n - 200); i < n; i++)
    {
      for (int j = i + 1; j <= n; j++)
      {
        ans = max(ans, i * j - k * (a[i] | a[j]));
      }
    }
    cout << ans << '\n';
  }
  return 0;
}