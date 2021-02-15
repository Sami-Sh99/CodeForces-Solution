//https://codeforces.com/problemset/problem/1433/A
#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,digit,ans=0;
        cin>>n;
        digit=n%10;
        while(n!=0){
            ans++;
            n=n/10;
        }
        ans=ans*(ans+1)/2;
        ans+=10*(digit-1);
        cout<<ans<<endl;
    }
    return 0;
}
