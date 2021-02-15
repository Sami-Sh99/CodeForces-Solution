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
    int n,x,t;cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(), v.end()); 
        int ans=0;
        for (int i = 0; i < v.size(); i++)
        {
            int level=0;
            for(int j=i;j<v.size();j++){
                if(v[i]-v[j]>0){
                    level++;break;
                }
            }
                if(level!=0)
                    ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}