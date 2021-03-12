//https://codeforces.com/contest/1493/problem/0
#include<iostream>
#include<set>

#include<vector>
#include<unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>v;
        set<int>rej;
        for (int i = k-1; i >= 1; i--)
        {
            if(rej.find(i)==rej.end()){
                v.push_back(i);
                rej.insert(k-i);
            }
        }
        for (int i = k+1; i <= n; i++)
            v.push_back(i);
        int s=v.size();
        cout<<s<<endl;
        for(int i=0;i<s;i++)
            cout<<v[i]<<' ';
        cout<<endl;
    }
    return 0;
}
