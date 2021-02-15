//https://codeforces.com/problemset/problem/1409/A
#include<algorithm>
#include<iostream>
#include<utility>
#include<cmath>

int main(int argc, char const *argv[])
{
    int t,a,b,mn,mx,op;
    std::cin>>t;
    while(t--){
        std::cin>>a>>b;
        mn=std::min(a,b);
        mx=std::max(a,b);
        op=0;
        op+=(mx-mn)/10;
        op+=((mx-mn)%10)!=0;
        std::cout<<op<<std::endl;
    }
    return 0;
}
