//https://codeforces.com/problemset/problem/339/A
#include<algorithm>
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int a,b,c;
    a=b=c=0;
    for(int i=0;i<s.length();i+=2){
        if(s[i]=='1')a++;
        if(s[i]=='2')b++;
        if(s[i]=='3')c++;
    }
    s="";
    for (int i = 0; i < a; i++)s+="1+";
    for (int i = 0; i < b; i++)s+="2+";
    for (int i = 0; i < c; i++)s+="3+";
    s=s.substr(0,s.length()-1);
    cout<<s<<endl;
    
    return 0;
}
