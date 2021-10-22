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

//*************************HELPER FUNCTIONS*************************
string dectobin(int n)
{
  return bitset<8>(n).to_string();
}
bool ispoweroftwo(long n)
{
  return n && !(n && (n - 1));
}

void solve()
{
  string s;
  cin >> s;
  int a = 0, b = 0, ce = 0;
  for (char c : s)
  {
    if (c == 'A')
      a++;
    if (c == 'B')
      b++;
    if (c == 'C')
      ce++;
  }
  //cout << a << " " << b << " " << ce << endl;
  if (b == (a + ce))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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