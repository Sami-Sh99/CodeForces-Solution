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
 
 
int check(int a, int b){
    return ((float)max(a,b)/(float)min(a,b))<=2;
}

int dense(int a, int b){
    int ans=0;
    while(check(a,b)==0){
        ans++;
        b*=2;
    }
    return ans;
}
int main()
{
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while(t--){
      int n,a[55];
      cin>>n;
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int ans=0;
      for (int i = 0; i < n-1; i++)
      {
          if(check(a[i],a[i+1])==0){
              ans+=dense(max(a[i],a[i+1]),min(a[i],a[i+1]));
          }
      }
      cout<<ans<<endl;

  }


    return 0;
}