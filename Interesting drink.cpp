//https://codeforces.com/problemset/problem/706/B

#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[100010];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int q,m;
    cin>>q;
    sort(a,a+n);
    for (int i = 0; i < q; i++)
    {
        cin>>m;
        cout<<upper_bound(a,a+n,m)-a<<endl;
    }
    
    
    return 0;
}
