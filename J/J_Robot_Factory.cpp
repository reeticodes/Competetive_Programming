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

//*************************HELPER FUNCTIONS*************************

string dectobin(int n)
{
  return bitset<8>(n).to_string();
}
bool ispoweroftwo(long n)
{
  return n && !(n && (n - 1));
}
void init_code()
{

#ifndef Reeti10
  freopen("inputf.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//********************************************************************

void solve();

int main()
{
  // init_code();
  fastio();
  int t = 1;
  //cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

bool isValid(int i, int j, int n, int m)
{
  if (i < 0 || i >= n || j < 0 || j >= m)
    return false;
  return true;
}
bool isKthBithSet(int n, int k)
{
  if ((n >> (k - 1)) & 1)
    return true;
  return false;
}
void dfs(map<pair<int, int>, vector<pair<int, int>>> mp, vector<vector<int>> &visited, int i, int j, int &c)
{
  if (visited[i][j])
    return;
  visited[i][j] = 1;
  c++;
  auto curr = mp[{i, j}];

  for (auto x : curr)
  {
    if (!visited[x.first][x.second])
      dfs(mp, visited, x.first, x.second, c);
  }
}

void solve()
{
  int n, m;

  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m)), visited(n, vector<int>(m, 0));

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> arr[i][j];
    }
  }

  queue<pair<int, int>> q;
  map<pair<int, int>, vector<pair<int, int>>> mp;
  q.push({0, 0});

  while (!q.empty())
  {

    pair<int, int> cur = q.front();
    q.pop();

    int x = cur.first, y = cur.second;

    if (visited[x][y])
      continue;
    //up
    if (isValid(x - 1, y, n, m))
    {
      if (!isKthBithSet(arr[x][y], 4) && !isKthBithSet(arr[x - 1][y], 2))
      {
        mp[{x, y}].push_back({x - 1, y});
        mp[{x - 1, y}].push_back({x, y});
      }
      q.push({x - 1, y});
    }
    //right
    if (isValid(x, y + 1, n, m))
    {
      if (!isKthBithSet(arr[x][y], 3) && !isKthBithSet(arr[x][y + 1], 1))
      {
        mp[{x, y}].push_back({x, y + 1});
        mp[{x, y + 1}].push_back({x, y});
      }
      q.push({x, y + 1});
    }
    //down
    if (isValid(x + 1, y, n, m))
    {
      if (!isKthBithSet(arr[x][y], 2) && !isKthBithSet(arr[x + 1][y], 4))
      {
        mp[{x, y}].push_back({x + 1, y});
        mp[{x + 1, y}].push_back({x, y});
      }
      q.push({x + 1, y});
    }
    //left
    if (isValid(x, y - 1, n, m))
    {
      if (!isKthBithSet(arr[x][y], 1) && !isKthBithSet(arr[x][y - 1], 3))
      {
        mp[{x, y}].push_back({x, y - 1});
        mp[{x, y - 1}].push_back({x, y});
      }
      q.push({x, y - 1});
    }

    visited[x][y] = 1;
  }

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      visited[i][j] = 0;

  int count = 0;
  vector<int> res;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (visited[i][j] == 0)
      {
        int c = 0;
        dfs(mp, visited, i, j, c);
        res.push_back(c);
        count++;
      }
    }
  }
  // cout << "COUNT: " << count << nline;
  sort(res.begin(), res.end(), greater<int>());
  for (int i = 0; i < res.size(); i++)
    cout << res[i] << " ";
  cout << nline;
}
//0000
// NESW (up,right,down,left)