//https://codeforces.com/problemset/problem/266/A

#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    char current=s[0];
    int ans=0;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i]==current)
            ans++;
        else
            current=s[i];
    }
    cout<<ans<<endl;
    return 0;
}
