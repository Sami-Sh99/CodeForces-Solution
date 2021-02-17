//https://codeforces.com/problemset/problem/118/A

#include<iostream>
#include<cmath>
using namespace std;

int isVowel(char s){
    return s=='a'||s=='o'||s=='y'||s=='e'||s=='u'||s=='i';
}

int main(int argc, char const *argv[])
{
    string s,ss;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isVowel(tolower(s[i])))
            continue;
        else{
                ss+='.',ss+=tolower(s[i]);
        }
    }
    cout<<ss<<endl;
    return 0;
}
