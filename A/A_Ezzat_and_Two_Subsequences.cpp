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

void solve()
{
  int n;
  cin >> n;
  float sum = 0;
  int maxsum = INT_MIN;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    if (x > maxsum)
      maxsum = x;
    sum += x;
  }

  double answerrr = maxsum + (sum - maxsum) / (n - 1);

  cout << setprecision(12) << answerrr << endl;
  return;
}

int main()
{

  int j;
  cin >> j;

  while (j--)
  {
    solve();
  }
  return 0;
}