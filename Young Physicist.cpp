//https://codeforces.com/problemset/problem/69/A

#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a=0,b=0,c=0,q,w,e;
    for (int i = 0; i < n; i++)
    {
        cin>>q>>w>>e;
        a+=q;b+=w;c+=e;
    }
    if(a || b || c) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    return 0;
}
