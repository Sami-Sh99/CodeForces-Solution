//https://codeforces.com/problemset/problem/50/A
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int n,l,j,k,x;
cin>>n>>j;
n=n*j;
if(n%2==0){
    x=n/2;
}
else
    x=(n-1)/2;
cout<<x<<endl;
    return 0;
}
