//https://codeforces.com/problemset/problem/1343/B

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t,n,j;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%4!=0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        j=2;
        for(int i=0;i<n/2;i++,j+=2)
            cout<<j<<" ";
        j=1;
        for(int i=1;i<n/2;i++,j+=2)
            cout<<j<<" ";
            cout<<n+n/2-1<<endl;
    }
    return 0;
}
