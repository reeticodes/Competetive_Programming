#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define nline "\n"
#define MOD 1000000007
#define ll long long
#define PI 3.141592653589793238462

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << "\n";
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

//***HELPER FUNCTIONS***

string dectobin(int n)
{
  return bitset<8>(n).to_string();
}
bool ispoweroftwo(long n)
{
  return n && !(n && (n - 1));
}
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
void init_code()
{

#ifndef Reeti10
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********

void solve();

int main()
{
  // init_code();
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

//REMOVE INIT() FUNCTION FROM INT MAIN !!!!!!
void solve()
{

  string s;
  cin >> s;
  ll count = 0;
  int n = s.length();
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == 'a' && s[i + 1] == 'b')
      count++;
    else if (s[i] == 'b' && s[i + 1] == 'a')
      count--;
  }

  if (count == 0)
  {
    cout << s << endl;
  }
  else if (count == 1)
  {
    for (int i = 0; i < n - 1; i++)
    {
      cout << s[i];
    }
    cout << 'a' << nline;
  }
  else
  {
    for (int i = 0; i < n - 1; i++)
    {
      cout << s[i];
    }
    cout << 'b' << nline;
  }
}
