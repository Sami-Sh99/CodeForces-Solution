//https://codeforces.com/problemset/problem/236/A

#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int a[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i]-'a']++;
    }
    int counter=0;
    for (int i = 0; i < 26; i++)
    {
        if(a[i]!=0)counter++;
    }
    
    cout<<((counter%2!=1) ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");

    return 0;
}
