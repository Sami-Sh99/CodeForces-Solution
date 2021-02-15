#include<iostream>
#include<limits>
#include<map>
using namespace std;

map<int,int> m;

int main(int argc, char const *argv[])
{
    int t,n,p;
    cin>>t;
    while(t--){
        m.clear();
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>p;
            m[p]=1;
        }
        cout<<m.size()<<endl;
        
    }
    return 0;
}
