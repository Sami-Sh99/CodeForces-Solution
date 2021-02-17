// https://codeforces.com/problemset/problem/158/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <map>
#include <unordered_map>
#include <deque>
#include <queue>
#include <cmath>
#include <math.h>
#include <unordered_set>
#include <fstream>
#include <stdio.h>
#include <climits>
#include <utility>
#include <iterator>
#include <limits>
#include <tuple>

using namespace std;

#define ull unsigned long long int
#define ll long long int
#define intt int64_t
#define pb push_back
#define str std::string
#define vec std::vector
#define dict std::unordered_map
#define cin std::cin
#define endl "\n"
#define bigint __int128 
const int inf = 1e9 + 7;
const ll INF = 1e18;
const double pi = 2 * acos(0);
int64_t gcd(int64_t a, int64_t b) {return b == 0 ? a : gcd(b, a % b);}
int64_t lcm(int64_t a, int64_t b) {return a / gcd(a, b) * b;}
int64_t mod_pow(int64_t a, int64_t b, int64_t m) {
  if (b == 0) return 1;
  if (b & 1) return a * mod_pow(a, b-1, m) % m;
  return mod_pow(a*a%m, b >> 1, m);}
bool is_prime(int64_t x) {
  if (x <= 3) return x >= 2;
  if (x % 2 == 0) return false;
  for (int64_t d = 3; d*d <= x; d += 2) {
    if (x % d == 0) return false;
  }return true;}
 
 
int a[100], b[100];
 
int main()
{
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);
  map<int,int>m;
  int n,x;
  cin>>n;
  m[1]=m[2]=m[3]=m[4]=0;
  for (int i = 0; i < n; i++)
  {
      cin>>x;
      m[x]++;
  }
  int ans=0;
  ans+=m[4];
  m[4]=0;
  
  if(m[3]<=m[1]){
      ans+=m[3];
      m[1]-=m[3];
      m[3]=0;
  }else{
      ans+=m[1];
      m[3]-=m[1];
      ans+=m[3];
      m[1]=0;
      m[3]=0;
  }
    if(m[2]%2==0){
        ans+=m[2]/2;
        m[2]=0;
    }else{
        ans+=(m[2]-1)/2;
        m[2]=1;
        if(m[1]>=2){
            ans++;
            m[1]-=2;
            m[2]=0;
        }else{
            ans++;
            m[2]=m[1]=0;
        }
    }
    if(m[1]%4==0)
        ans+=m[1]/4;
    else
        ans+=m[1]/4+1;

    cout<<ans;

    return 0;
}