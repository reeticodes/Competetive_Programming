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
  long long int a, b, k;
  cin >> a >> b >> k;
  int res = 0;
  while (a != b || a > 1 && b > 1 || res > k)
  {
    debug("a", a);
    debug("b", b);
    if (a % 2 == 0 && b % 2 == 0)
    {
      a = a / 2;
      b = b / 2;
      res++;
      continue;
    }
    if (a % 3 == 0 && b % 3 == 0)
    {
      a = a / 2;
      b = b / 2;
      res++;
      continue;
    }
    if (a % 5 == 0 && b % 5 == 0)
    {
      a = a / 5;
      b = b / 5;
      res++;
      continue;
    }
    if (a % 7 == 0 && b % 7 == 0)
    {
      a = a / 7;
      b = b / 7;
      res++;
      continue;
    }
    break;
  }
  if (a == b && res < k)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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