//https://codeforces.com/problemset/problem/1/A

#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int m,n,a;
    cin>>n>>m>>a;
    cout<<(long long)(ceill((long double)m/(long double)a)*ceill((long double)n/(long double)a))<<endl;
    return 0;
}
