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

void solve()
{
  string s;
  cin >> s;
  int n = s.size();
  int tot = (n * (n + 1)) / 2;
  int st = 0;
  // vector<pair<int,int>>v;
  // for(int i=0;i<n-1;i++){
  //   char ch1=s[i];
  //   char ch2=s[i+1];
  //   if(ch1!='?' and ch2!='?'){
  //     if(ch1!=ch2){

  //     }
  //     else{
  //       v.push_back({i,i+1});
  //       // tot-=(n-i-1)*(i+1-st);
  //       // st=i+1;
  //     }
  //   }
  // }
  // st=0;
  // for(int i=1;i<n-1;i++){
  //   if(s[i]=='?'){
  //     if(s[i-1]!=s[i+1] and s[i-1]!='?' and s[i+1]!='?'){
  //       v.push_back({i-1,i+1});
  //       // tot-=(i-st)*(n-(i+1));
  //       // st=i;
  //     }
  //   }
  // }
  // sort(v.begin(),v.end());
  // // int st=0;
  // int ans=0;
  // for(auto x:v){
  //   // cout<<x.first<<" "<<x.second<<endl;
  //   // cout<<((x.second-1-st+1)*(x.second-1-st+1+1))/2<<endl;
  //   if(x.first+2==x.second)
  //   ans-=1;
  //   ans+=((x.second-1-st+1)*(x.second-1-st+1+1))/2;
  //   st=x.first+1;
  //   // tot-=(x.first+1-st)*(n-x.second);
  //   // st=x.first+1;
  // }
  // ans+=((n-1-st+1)*(n-1-st+1+1))/2;
  // cout<<ans;
  vector<pair<int, int>> v;
  for (int i = 0; i < n;)
  {
    int j = i;
    if (i + 1 < n and s[i] != '?')
    {
      if (s[i + 1] == s[i])
      {
        v.push_back({i, i + 1});
      }
      i++;
      continue;
    }
    else if (i + 1 == n)
    {
      i++;
      continue;
    }
    while (j < n and s[j] == '?')
    {
      j++;
    }
    // int save=j;
    if (i - 1 < 0 or j == n)
    {
      i = j;
      continue;
    }
    int st = i - 1;
    int en = j;
    int cnt = j - i;
    if (cnt & 1)
    {
      if (s[st] != s[en])
      {
        v.push_back({st, en});
      }
    }
    else
    {
      if (s[st] == s[en])
      {
        v.push_back({st, en});
      }
    }
    i = j;
  }
  sort(v.begin(), v.end());
  int ans = 0;
  for (auto x : v)
  {
    // cout<<x.first<<" "<<x.second<<endl;
    // cout<<((x.second-1-st+1)*(x.second-1-st+1+1))/2<<endl;
    ans -= ((x.second - x.first - 1) * (x.second - x.first)) / 2;
    ans += ((x.second - 1 - st + 1) * (x.second - 1 - st + 1 + 1)) / 2;
    st = x.first + 1;
    // tot-=(x.first+1-st)*(n-x.second);
    // st=x.first+1;
  }
  ans += ((n - 1 - st + 1) * (n - 1 - st + 1 + 1)) / 2;
  cout << ans;
  cout << endl;
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