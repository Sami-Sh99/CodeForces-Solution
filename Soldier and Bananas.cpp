//https://codeforces.com/problemset/problem/546/A
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int k,n,w;
    cin>>k>>n>>w;
    cout<<max(0,(w*(w+1)/2)*k-n);
    return 0;
}
