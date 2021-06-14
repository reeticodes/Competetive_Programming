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
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
void solve()
{
  int n, i, iseve = 0;
  cin >> n;
  vector<int> arr(n), even, odd;
  rep(i, 0, n)
  {
    cin >> arr[i];
    if (arr[i] % 2)
      odd.push_back(arr[i]);
    else
    {
      even.push_back(arr[i]);
    }
  }
  int ans = 0;
  //   if (!iseve)
  //   {
  //     cout << 0 << endl;
  //     return;
  //   }

  //   sort(odd.begin(), odd.end());
  //   sort(even.begin(), even.end());
  //   int x=0,y=0;
  //   while(x<n && y<even.size())
  //     arr[x++] = even[y++];
  //   y=0;
  //   while(x<n && y<odd.size())
  //     arr[x++] = odd[y++];

  sort(arr.begin(), arr.end(), [](int x, int y)
       { return x % 2 < y % 2; });

  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (gcd(arr[i], arr[j] * 2) > 1)
        ans++;
  cout << ans << endl;
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