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
  string p, s;
  cin >> p;
  cin >> s;
  int n = s.length();
  unordered_map<char, int> mp;

  for (int i = 0; i < 26; i++)
  {
    mp[p[i]] = i + 1;
  }
  int res = 0;

  for (int i = 1; i < n; i++)
  {
    int pos1 = mp[s[i - 1]];
    int pos2 = mp[s[i]];

    res += abs(pos1 - pos2);
  }
  cout << res << nline;
}

// 778 , 0,4
// 9 + 769*