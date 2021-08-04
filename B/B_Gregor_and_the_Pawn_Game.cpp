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
  string enm, pwn;
  cin >> enm;
  cin >> pwn;

  int mx = 0;
  for (int i = 0; i < n; i++)
  {
    if (pwn[i] == '1' && enm[i] == '0')
    {
      mx++;
      pwn[i] = 'o';
      enm[i] = 'o';
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (pwn[i] == '0' || pwn[i] == 'o')
      continue;
    if (i == 0 && i < n - 1 && enm[i + 1] == '1')
    {
      mx++;
      enm[i + 1] = 'o';
    }
    else if (i == n - 1 && i >= 0 && enm[i - 1] == '1')
    {
      mx++;
      enm[i - 1] = 'o';
    }
    else
    {

      if (i >= 0 && enm[i - 1] == '1')
      {
        mx++;
        enm[i - 1] = 'o';
      }
      else if (i < n - 1 && enm[i + 1] == '1')
      {
        mx++;
        enm[i + 1] = 'o';
      }
    }
    // cout << "enm: " << enm << endl;
    // cout << "pwn: " << pwn << endl;
  }

  cout << mx << endl;
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