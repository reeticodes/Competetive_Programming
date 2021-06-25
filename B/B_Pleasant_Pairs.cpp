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
  vector<int> nums(n), arr(2 * n - 2);

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
    {
      if (i == j)
        continue;

      if (i + j + 2 == nums[i] * nums[j])
        count++;
    }
  cout << count << endl;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}