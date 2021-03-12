// https://codeforces.com/contest/1493/problem/B

#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int hh,mm,m,h,hhh,mmm;
int time[4]={0,0,0,0};
int mirror[10]={0,1,5,-1,-1,2,-1,-1,8,-1};


int get(int x) {
    string s = to_string(x);
    if ((int)s.size() == 1) s = "0" + s;
    string answ = "";
    for (int i = 1; i >= 0; --i) {
        if (mirror[s[i] - '0'] == -1) return 100000;
        answ += char(mirror[s[i] - '0'] + '0');
    }
    return stoi(answ);
}
string form(int x){
    string s="";
    if(x<10)s="0"+ to_string(x);
    else s=to_string(x);
    return s;
}
int main(int argc, char const *argv[])
{
    int t;cin>>t;
    int carry,c2,c3,c4;
    while(t--){
        cin>>hh>>mm;
        
        string s;cin>>s;
        time[0]=int(s[0])-'0';
        time[1]=int(s[1])-'0';
        time[2]=int(s[3])-'0';
        time[3]=int(s[4])-'0';
        h=time[0]*10+time[1];
        m=time[2]*10+time[3];
        while(1){
            if(m==mm){m=0;h++;}
            if(h==hh){h=0;}
            if(get(m)<hh && get(h)<mm){
                cout<<form(h)<<":"<<form(m)<<endl;
                break;
            }
            m++;

        }
    }
    return 0;
}
