// hare krishna hare krishna krishna krishna hare hare
// hare ram hare ram ram ram hare hare
#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_map>
#include <queue>
#include <iomanip>
#include <stack>
#include <bitset>
#include <stdio.h>
#include <list>
#include <deque>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Nikhil cout.tie(NULL);
using namespace std;
typedef long long ll;
#define int long long
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define M 1000000007
#define pi pair<int, int>
#define M_P 3.14159265358979323846
#define inf 1e18
template <class T>
T expo(T base, T exp, T mod)
{
  T res = 1;
  base = base % mod;
  while (exp > 0)
  {
    if (exp & 1)
      res = (res * base) % mod;
    exp = exp >> 1;
    base = (base * base) % mod;
  }
  return res;
}
void input(vi &arr)
{
  for (int i = 0; i < arr.size(); i++)
    cin >> arr[i];
}
void output(vi &arr)
{
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
// vector<bool> prime((int)1e8 + 2, true);
// void SieveOfEratosthenes(int n)
// {
//     prime[1] = false;
//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
// }
// int parent(vi &par,int u)
// {
//   if(par[u] == u) return u;
//   return par[u] = parent(par,par[u]);

// }
// ncr values calculator;
// vector<int>fac(1001);
// vector<int>ifac(1001);
// void preprocess()
// {
//   fac[0] = 1;
//   fac[1] = 1;
//   for(int i = 2;i<=1000;i++)
//   {
//     fac[i] = (fac[i-1]* i)%M;
//   }
//   int m = 1e9 + 7;
//   int val = expo(fac[1000],m-2,m);
//   ifac[1000] = val;

//   for(int i = 1000-1;i>=1;i--)
//   {
//     ifac[i] = ((i+1) * ifac[i+1])%M;
//   }
// }
//==========================================================================
void solve()
{
  int n,x; cin>>n>>x;
  map<int,int>mp;
  queue<pair<int,int> >q;
  q.push({x,0});

  while(q.size() > 0){
    pair<int,int>t = q.front();
    q.pop();
    string s = to_string(t.first);
    if(s.length() == n){
      cout<<t.second<<"\n";
      return ;
    }

    for(int i = 0;i<s.length();i++){
      if(s[i] == '0' || s[i] == '1') continue;
      int d = (s[i]-'0');
      int k = (t.first*d);
      if(mp.find(k) == mp.end()){
         mp[k] = t.second+1;
         q.push({k,mp[k]});
      }
    }
  }

  cout<<"-1\n";
}
int32_t main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  Code By Nikhil int t;
  //cin >> t;
  t = 1;
  //   SieveOfEratosthenes(1e7);
  while (t--)
  {
    solve();
  }
}