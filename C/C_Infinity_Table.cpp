#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

bool check(int n)
{
  if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
    return true;
  else
    return false;
}

void please()
{

  ll n;
  cin >> n;
  if (n == 1)
  {
    cout << 1 << " " << 1 << endl;
    return;
  }
  if (n == 2)
  {
    cout << 1 << " " << 2 << endl;
    return;
  }
  if (n == 3)
  {
    cout << 2 << " " << 2 << endl;
    return;
  }

  ll msize = sqrt(n);
  if (!check(n))
    msize++;
  ll i = msize, y = 1;
  ll no = msize * msize;

  if (no == n || check(n))
  {
    cout << i << " " << y << endl;
    return;
  }

  while (y <= msize)
  {

    if (no == n)
    {
      cout << i << " " << y << endl;
      return;
    }
    no--;
    y++;
  }
  i = msize, y = msize;
  no++;

  while (i >= 1)
  {

    if (no == n)
    {
      cout << i << " " << y << endl;
      return;
    }
    no--;
    i--;
  }
}

int main()
{

  int tccc;
  cin >> tccc;
  while (tccc--)
  {
    please();
  }
  return 0;
}