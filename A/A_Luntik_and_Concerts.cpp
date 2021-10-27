#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define nline "\n"
#define MOD 1000000007
#define ll long long
#define PI 3.141592653589793238462

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << "\n";
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

//*************************HELPER FUNCTIONS*************************

string dectobin(int n)
{
  return bitset<8>(n).to_string();
}
bool ispoweroftwo(long n)
{
  return n && !(n && (n - 1));
}
void init_code()
{

#ifndef Reeti10
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********************************************************************

void solve();

int main()
{
  // init_code();
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

ll power(ll a, ll b, ll m = MOD)
{
  a %= m;
  ll res = 1;
  while (b)
  {
    if (b % 2)
      res = res * a % m;
    a = a * a % m;
    b /= 2;
  }
  return res;
}

void solve()
{
  ll a, b, c;
  cin >> a >> b >> c;

  ll x = 0, y = 0;
  ll d = c / 2;

  if (c % 2)
  {
    x += d * 3;
    y += (d + 1) * 3;
  }
  else
  {
    x += d * 3;
    y += d * 3;
  }

  d = b / 2;
  if (b % 2)
  {
    if (x < y)
    {
      x += (d + 1) * 2;
      y += (d)*2;
    }
    else
    {
      y += (d + 1) * 2;
      x += (d)*2;
    }
  }
  else
  {
    x += d * 2;
    y += d * 2;
  }

  d = a / 2;
  if (a % 2)
  {
    if (x < y)
    {
      x += d + 1;
      y += d;
    }
    else
    {
      y += d + 1;
      x += d;
    }
  }
  else
  {
    x += d;
    y += d;
  }
  ll res = abs(x - y);
  cout << res << nline;

  // ll a, b, c;
  // cin >> a >> b >> c;
  // if ((a + b * 2 + c * 3) % 2 == 0)
  //   cout << 0 << endl;
  // else
  //   cout << 1 << endl;
}
