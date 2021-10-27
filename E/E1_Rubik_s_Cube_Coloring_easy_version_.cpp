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
  // cin >> t;
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

  ll n;
  cin >> n;
  ll pw = pow(2, n);
  pw -= 2;

  ll y = power(4, pw);

  // debug("pw", pw);
  // debug("y", y);
  ll x = (6ll % MOD * y % MOD) % MOD;

  cout << x << nline;
}
