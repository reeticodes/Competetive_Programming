#include <bits/stdc++.h>
using namespace std;
//*************************MACROS*************************
#define endl "\n"
#define MOD = 1000000007
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
  int n;
  cin >> n;
  vector<int> arr(n + 2);
  int r;
  arr[0] = 0;

  rep(r, 1, n + 1)
          cin >>
      arr[r];
  arr[n + 1] = 0;

  int m = INT_MAX;
  ll sum = 0;
  n += 2;
  //debugarr(arr, r, arr.size());
  for (int i = 1; i < n; i++)
  {
    sum += abs(arr[i] - arr[i - 1]);
  }
  //debug("sum", sum);
  for (int i = 1; i < n; i++)
  {
    if (arr[i] - arr[i - 1] > 0 && arr[i] - arr[i + 1] > 0)
    {
      int m = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
      arr[i] -= m;
      sum -= m;
    }
  }

  cout << sum << endl;
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