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
  int n;
  cin >> n;
  int b = n % 11;
  int A = n - b * 111;
  if (A >= 0 and A % 11 == 0)
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
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