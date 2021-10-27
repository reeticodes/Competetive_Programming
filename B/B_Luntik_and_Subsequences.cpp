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
#ifndef reeti10
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********************************************************************

void solve();

int main()
{
  // init_code();
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
  vector<ll> arr(n);
  ll one = 0, z = 0, sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
    if (arr[i] == 1)
      one++;
    if (arr[i] == 0)
      z++;
    sum += arr[i];
  }
  sum -= 1;
  ll res = 0;
  if (!one)
  {
    cout << 0 << nline;
    return;
  }
  if (sum == 0)
  {
    res += pow(2, z) * (one);
  }
  else if (one && z)
  {
    res += pow(2, z) * (one);
  }
  else if (one)
  {
    res += one;
  }

  cout << res << nline;
}
