//https://codeforces.com/problemset/problem/1385/B

#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        vector<int>v;
        map<int,int>m;
        cin>>n;
        for (int i = 0; i < 2*n; i++)
        {
            cin>>x;
            if(m.find(x)==m.end()){
                v.push_back(x);
                m[x]=1;
            }

        }
        for (auto &&i : v)
        {
            cout<<i<< " ";
        }
        cout<<endl;
        
    }
    return 0;
}
