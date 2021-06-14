#include <bits/stdc++.h>
using namespace std;
//*************************MACROS*************************
#define endl "\n"

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
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << 3 * n << endl;
  for (int i = 1; i <= n - 1; i += 2)
  {
    cout << 2 << " " << i << " " << i + 1 << endl;
    cout << 2 << " " << i << " " << i + 1 << endl;
    cout << 1 << " " << i << " " << i + 1 << endl;
    cout << 2 << " " << i << " " << i + 1 << endl;
    cout << 2 << " " << i << " " << i + 1 << endl;
    cout << 1 << " " << i << " " << i + 1 << endl;
  }
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