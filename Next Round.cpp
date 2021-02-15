//https://codeforces.com/problemset/problem/158/A

#include<iostream>
#include<vector>
using namespace std;


int main(int argc, char const *argv[])
{
    int n,r,k,x=0,s=0;
    vector<int> a;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>r;
        a.push_back(r);
        if(i==k-1)
            s=r;
    }
        for (int i = 0; i < n; i++)
    {
        if(a[i]>=s && a[i]>0)
        x++;
    }
    cout<<x<<endl;
    return 0;
}

