#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;

    cin >> n;
    vector<int> arr(n);

    int neg = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] < 0)
        neg = 1;
    }
    if (neg == 1)
    {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl
         << 100 << endl;
    for (int i = 1; i <= 100; i++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}