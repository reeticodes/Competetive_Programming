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
  int n;
  cin >> n;
  if (n < 9)
    return 0;
  if ((n + 1) % 10 == 0)
    return (n + 1) / 10;
  else
    return n / 10;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    cout << solve() << endl;
  }
  return 0;
}