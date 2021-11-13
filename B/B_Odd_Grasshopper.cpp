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

//***HELPER FUNCTIONS***

string dectobin(int n)
{
  return bitset<8>(n).to_string();
}
bool ispoweroftwo(long n)
{
  return n && !(n && (n - 1));
}
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll power(ll a, ll b)
{
  ll res = 1;
  while (b)
  {
    if (b % 2)
      res = res * a;
    a = a * a;
    b /= 2;
  }
  return res;
}
void init_code()
{

#ifndef Reeti10
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********

void solve();

int main()
{
  //init_code();
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

//REMOVE INIT() FUNCTION FROM INT MAIN !!!!!!
void solve()
{
  ll x, n;
  cin >> x >> n;
  ll k = (n / 4) * 4;
  if (x % 2 == 0)
  {
    if (n % 4 == 0)
      cout << x << nline;
    else if (n % 4 == 1)
    {
      cout << x - (k + 1) << nline;
    }
    else if (n % 4 == 2)
    {
      cout << x + 1 << nline;
    }
    else
      cout << x + k + 4 << nline;
  }
  else
  {
    if (n % 4 == 0)
      cout << x << nline;
    else if (n % 4 == 1)
    {
      cout << x + (k + 1) << nline;
    }
    else if (n % 4 == 2)
    {
      cout << x - 1 << nline;
    }
    else
      cout << x - (k + 4) << nline;
  }
}

// 778 , 0,4
// 9 + 769*