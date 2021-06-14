#include <bits/stdc++.h>
using namespace std;
//*************************MACROS*************************
#define endl "\n"
#define MOD = 1000000007

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;
//*************************MACROS*************************

void solve()
{
  int n;
  cin >> n;
  vector<long long int> arr(n);
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  long long s = 0;
  for (int i = 0; i < n; i++)
  {
    long long x;
    cin >> x;
    s += x;
    pq.push(x);
    while (s < 0)
    {
      s -= pq.top();
      pq.pop();
    }
  }
  cout << (int)pq.size() << endl;
  return;
}

int main()
{
  int t = 1;
  //cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}