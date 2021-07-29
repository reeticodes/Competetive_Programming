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

int solve()
{
  int ax, ay, bx, by, fx, fy;
  cin >> ax >> ay >> bx >> by >> fx >> fy;

  if (ax == bx && ay == by)
    return 0;

  if (ax == bx || ay == by)
  {
    //out of range obstacle
    // if (ax == bx && fx != ax || ay == by && fy != ay)
    //   return ax == bx ? abs(ay - by) : abs(ax - ay);
    if (fx != ax && fx != bx && fy != ay && fy != by)
    {
      if (ax == bx)
        return abs(ay - by);
      else
        return abs(ax - bx);
    }
    if (fx == ax && ax == bx)
    {
      if (fy > ay && fy < by || fy > by && fy < ay)
        return abs(ay - by) + 2;
      else
        return abs(ay - by);
    }
    else if (fy == ay && ay == by)
    {
      if (fx > ax && fx < bx || fx < ax && fx > bx)
        return abs(ax - bx) + 2;
      else
        return abs(ax - bx);
    }
    return abs(ax - bx) + abs(ay - by);
  }
  else
  {

    return abs(ax - bx) + abs(ay - by);
  }

  return 0;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    cout << solve() << endl;
  }
  return 0;
}