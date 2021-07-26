#include <bits/stdc++.h>

using namespace std;

int main()
{

  int x = 1;
  cin >> x;
  while (x--)
  {
    int n;
    cin >> n;

    int lll;
    int bbbb = n / 3;

    lll = bbbb;
    if (n % 3 == 2)
      bbbb += 1;
    if (n % 3 == 1)
      lll += 1;

    cout << lll << " " << bbbb << endl;
  }
  return 0;
}