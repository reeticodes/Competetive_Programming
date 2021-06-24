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
void dfs(vector<int> graph, vector<int> &vis, int i)
{
  vis[i] = 1;

  if (vis[graph[i]] == 0)
    dfs(graph, vis, graph[i]);
}

void solve()
{
  ll n;
  cin >> n;
  vector<ll> a(n);
  int i;
  rep(i, 0, n)
          cin >>
      a[i];
  vector<ll> b(n), to(n + 2);
  rep(i, 0, n)
  {
    cin >> b[i];
    to[a[i]] = b[i];
  }

  vector<ll> vis(n + 2, 0);
  ll ans = 1;
  rep(i, 1, n) if (!vis[i])
  {
    ans = ans * 2 % MOD;
    ll crt = i;
    while (!vis[crt])
    {
      vis[crt] = 1;
      crt = to[crt];
    }
  }

  cout << ans << endl;
}

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}