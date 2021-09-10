#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<
#define fr first
#define sc second
#define VC vector<int>
#define VP vector<pair<int, int>>
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define all(x) (x).begin(), (x).end()

void solve()
{
  int n, k;
  cin >> n >> k;

  vector<int> vec(n), temp(n);
  map<int, int> xyz;

  f(i, 0, n)
  {
    cin >> vec[i];
    temp[i] = vec[i];
  }

  sort(temp.begin(), temp.end());

  f(i, 0, n)
  {
    xyz[temp[i]] = i;
  }

  int ans = 0;

  f(i, 0, n)
  {
    if (xyz[vec[i]] > 0 && i > 0 && temp[xyz[vec[i]] - 1] == vec[i - 1])
    {
      continue;
    }
    else
    {
      ans++;
    }
  }

  if (ans <= k)
  {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
}

int32_t main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);

  int t;
  t = 1;
  in t;
  while (t--)
  {
    solve();
  }
}