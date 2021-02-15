//https://codeforces.com/problemset/problem/281/A
#include<iostream>
#include<string>
#include<utility>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    s=(char)toupper(s[0])+s.substr(1,s.length());
    cout<<s<<endl;
    return 0;
}
