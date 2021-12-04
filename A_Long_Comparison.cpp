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
// ll power(ll a, ll b)
// {
// 	ll res = 1;
// 	while (b)
// 	{
// 		if (b % 2)
// 			res = res * a ;
// 		a = a * a ;
// 		b /= 2;
// 	}
// 	return res;
// }
int power(long long x, unsigned int y, int p = MOD)
{
  int res = 1; // Initialize result

  x = x % p; // Update x if it is more than or
  // equal to p

  if (x == 0)
    return 0; // In case x is divisible by p;

  while (y > 0)
  {
    // If y is odd, multiply x with result
    if (y & 1)
      res = (res * x) % p;

    // y must be even now
    y = y >> 1; // y = y/2
    x = (x * x) % p;
  }
  return res;
}
void init_code()
{

#ifndef ONLINE_JUDGE
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********

void solve();

int main()
{
  init_code();
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

void solve()
{
  ll a, z1, b, z2;
  cin >> a >> z1;
  cin >> b >> z2;

  ll mn = min(z1, z2);
  z1 -= mn;
  z2 -= mn;

  if (z1 >= 7)
    cout << ">" << nline;
  else if (z2 >= 7)
    cout << "<" << nline;
  else
  {
    // a *= power(10, z1);
    // b *= power(10, z2);
    for (int i = 0; i < z1; ++i)
      a *= 10;
    for (int i = 0; i < z2; ++i)
      b *= 10;

    if (a > b)
      cout << ">" << nline;
    else if (b > a)
      cout << "<" << nline;
    else
      cout << "=" << nline;
  }
}
