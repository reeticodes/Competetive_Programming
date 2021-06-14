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
  if (b == 1)
    return a;
  return (b, a % b);
}

void solve()
{
  int a,b;
  cin>>a>>b;
  cout<<a<<" "<<2*a<<" "<<(a+(2*a))<<endl;
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