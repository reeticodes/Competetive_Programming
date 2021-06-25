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
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }
  vector<int> arr(n);
  int i;
  rep(i, 0, n)
      arr[i] = i + 1;

  if (n % 2)
  {

    for (int i = 0; i < n - 1; i += 2)
    {
      swap(arr[i], arr[i + 1]);
    }
    swap(arr[n - 1], arr[n - 2]);
  }
  else
  {
    for (int i = 0; i < n - 1; i += 2)
    {
      swap(arr[i], arr[i + 1]);
    }
  }

  rep(i, 0, n)
          cout
      << arr[i] << " ";
  cout << endl;
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