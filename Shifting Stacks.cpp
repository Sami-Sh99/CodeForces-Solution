//https://codeforces.com/contest/1490/problem/C

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
 
 //https://codeforces.com/contest/1486/problem/0
int a[100], b[100];
 
int main()
{
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t=0;
  cin>>t;
  while(t--){
      long long n;
      cin>>n;
      long long x,s=0;
      long long nn=n*(n-1)/2;
      int i;
      bool flag=true;

    long long a[101];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        if(i==1){
            a[i]+=a[0];
            a[0]=0;
        }
        else{
            a[i]+=(a[i-1]-a[i-2]-1);
            a[i-1]=a[i-2]+1;
        }

       if(a[i]<=a[i-1]){
            flag=false;
            i++;
            break;
        }

    }

    if(flag)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
      
      
  }
    return 0;
}