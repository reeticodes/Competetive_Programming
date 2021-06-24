#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  int T = 1;
  // cin>>T;
  while (T--)
  {
    ll n, k, x;
    cin >> n >> k >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    vector<ll> v;
    for (int i = 1; i < n; i++)
    {
      if (a[i] - a[i - 1] > x)
        v.push_back(a[i] - a[i - 1] - 1);
    }
    sort(v.begin(), v.end());
    ll cnt = v.size() + 1;
    for (int i = 0; i < v.size() && k; i++)
    {
      k -= v[i] / x;
      if (k >= 0)
        cnt--;
    }
    cout << cnt << "\n";
  }
  return 0;
}