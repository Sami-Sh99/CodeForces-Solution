//https://codeforces.com/problemset/problem/231/A
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int n,l,j,k,x;
cin>>n;
x=0;
for (int i = 0; i < n; i++)
{
    cin>>l>>j>>k;
    if(l+j+k>=2)
        x++;
}
cout<<x<<endl;
    return 0;
}
