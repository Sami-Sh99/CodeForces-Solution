#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long n,k;
        cin>>n>>k;
        if(n%2!=k%2 || n<k*k){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
