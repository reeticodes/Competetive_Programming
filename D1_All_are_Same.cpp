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
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
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
  int n;
  cin >> n;
  vector<int> arr(n);

  int mn = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mn = min(mn, arr[i]);
  }
  int g = 0;
  for (auto i : arr)
  {
    if (i == mn)
      continue;
    g = gcd(g, i - mn);
  }
  if (g == 0)
    cout << -1 << nline;
  else
    cout << g << nline;
}
