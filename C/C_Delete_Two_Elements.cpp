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
  //init_code();
  fastio();
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

void solve()
{
  ll n;
  cin >> n;
  unordered_map<ll, ll> m;
  ll x = 0;
  ll arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    x += arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] *= n;
  }
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    ll val1 = x * 2ll;
    ll val2 = arr[i];
    if (m.find(val1 - val2) != m.end())
      ans += m[val1 - val2];
    m[val2]++;
  }
  cout << ans << nline;
}