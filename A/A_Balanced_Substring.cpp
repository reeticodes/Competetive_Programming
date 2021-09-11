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
  string s;
  cin >> s;

  int l = 0, r = 0;
  int a = 0, b = 0;

  for (int i = 0; i < n; i++)
  {
    a = 0;
    b = 0;
    for (int j = i; j < n; j++)
    {

      if (s[j] == 'a')
        a++;
      else
        b++;
      if (a != 0 && b != 0 && a == b)
      {
        cout << i + 1 << " " << j + 1 << endl;
        return;
      }
    }
  }
  cout << -1 << " " << -1 << endl;
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