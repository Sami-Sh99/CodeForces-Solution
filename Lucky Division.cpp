//https://codeforces.com/problemset/problem/69/A

#include<iostream>
#include<cmath>
using namespace std;

int isLucky(int i){
    while(i!=0){
        if(i%10!=4&&i%10!=7)
        return 0;
        i/=10;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)    {
        if(isLucky(i)&& n%i==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
