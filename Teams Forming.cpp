//https://codeforces.com/problemset/problem/1092/B
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[101];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int q,m=0;
    sort(a,a+n);
    for(int i=0;i<n;i+=2){
        m+=abs(a[i]-a[i+1]);
    }
    cout<<m;
    
    return 0;
}
