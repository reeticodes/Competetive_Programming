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
  int k;
  cin >> k;
  int i = 0;
  int num = 1;
  vector<int> arr;
  while (i <= k)
  {
    if (num % 3 == 0 || num % 10 == 3)
      num++;
    else
    {
      arr.push_back(num);
      i++;
      num++;
    }
  }
  cout << arr[k - 1] << endl;
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