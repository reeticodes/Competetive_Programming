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

  ll max_len = 2e3 + 10, n;
  cin >> n;
  vector<vector<ll>> arr(max_len, vector<ll>(n));
  vector<ll> count(max_len, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[0][i];
  }

  ll q;
  cin >> q;
  vector<vector<ll>> qv(q, vector<ll>(2));

  for (int i = 0; i < q; ++i)
  {
    cin >> qv[i][0];
    cin >> qv[i][1];
  }

  for (int i = 1; i < max_len; ++i)
  {
    for (int j = 0; j <= n; j++)
      count[j] = 0;
    for (int j = 0; j < n; j++)
      count[arr[i - 1][j]]++;
    for (int j = 0; j < n; j++)
      arr[i][j] = count[arr[i - 1][j]];
    for (int j = 0; j < n; j++)
      count[arr[i][j]]--;
  }

  for (auto v : qv)
  {
    if (v[1] >= arr.size())
      cout << arr[arr.size() - 1][v[0] - 1] << nline;
    else
      cout << arr[v[1]][v[0] - 1] << nline;
  }

  // for (int i = 0; i < max_len; ++i)
  // {
  // 	for (int j = 0; j < n; j++) {
  // 		cout << arr[i][j] << " ";
  // 	}
  // 	cout << nline;
  // }
}

//2 1 1 4 3 1 2
//2,3,3,1,1,3,2
//2,3,3,2,2,3,2
//4,3,3,4,4,3,4

//1 2 3 4 5 6 7
//3 2 1 1 0 0 0
//
