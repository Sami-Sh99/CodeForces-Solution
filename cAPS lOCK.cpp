//https://codeforces.com/problemset/problem/131/A

#include<iostream>
#include<cmath>
using namespace std;

int isCaps(string s){
        int i;
        s.erase(s.begin());
        for(i=0;i<s.length();i++){
            if(islower(s[i]))
                break;
        }
        if(i==s.length())
            return 1;
        return 0;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    if(isCaps(s)){
        for (int i = 0; i < s.length(); i++)
        {
            if(isupper(s[i]))
                cout<<(char)tolower(s[i]);
            else
                cout<<(char)toupper(s[i]);
        }
    }
    else{
        cout<<s;
    }
    
    return 0;
}
