#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;

const int M = 1e9 + 7;
ll mod(ll x)
{
  return (x % M + M) % M;
}

ll mul(ll a, ll b)
{
  return mod((mod(a) * mod(b)));
}

ll add(ll a, ll b)
{
  return mod(mod(a) + mod(b));
}

void solve()
{
  ll n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  ll ans = a * n;
  if (b > 0)
    ans += b * n;
  else
  {
    int total = 0;
    for (int i = 1; i < n; i++)
    {
      if (s[i] != s[i - 1])
        total++;
    }
    total++;
    ans += ((total / 2) + 1) * b;
  }
  cout << ans << "\n";
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cout << fixed;
  cout << setprecision(10);
  //        freopen("timber_input.txt", "r", stdin);
  //        freopen("timber_output.txt", "w", stdout);
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    //    cout<<"Case #"<<i<<": ";
    solve();
  }
  return 0;
}