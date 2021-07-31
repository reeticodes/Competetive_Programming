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
  int k, n, m;
  cin >> k >> n >> m;
  vector<int> mono(n), poly(m);

  for (int i = 0; i < n; i++)
    cin >> mono[i];
  for (int i = 0; i < m; i++)
    cin >> poly[i];

  vector<int> seq(n + m);

  int i = 0, j = 0, s = 0;
  while (i < n && j < m)
  {

    if (mono[i] == 0)
    {
      seq[s++] = 0;
      i++;
      k++;
    }
    else if (poly[j] == 0)
    {
      seq[s++] = 0;
      j++;
      k++;
    }
    else
    {
      if (mono[i] <= k)
      {
        seq[s++] = mono[i++];
      }
      else if (poly[j] <= k)
        seq[s++] = poly[j++];
      else
      {
        cout << -1 << endl;
        return;
      }
    }
  }

  while (i < n)
  {

    if (mono[i] == 0)
    {
      seq[s++] = 0;
      i++;
      k++;
    }
    else if (mono[i] <= k)
    {
      seq[s++] = mono[i++];
    }
    else
    {
      cout << -1 << endl;
      return;
    }
  }

  while (j < m)
  {

    if (poly[j] == 0)
    {
      seq[s++] = 0;
      k++;
      j++;
    }
    else if (poly[j] <= k)
    {

      seq[s++] = poly[j++];
    }
    else
    {
      cout << -1 << endl;
      return;
    }
  }

  for (int i = 0; i < seq.size(); i++)
    cout << seq[i] << " ";
  cout << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}