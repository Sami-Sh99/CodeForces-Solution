//https://codeforces.com/problemset/problem/200/B
#include<iostream>
#include<limits>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,s=0,x;
    double a[110];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        s+=x;
        a[0]+=x/100.0;
    }
    cout.precision(numeric_limits<double>::digits10);
    cout<<  a[0]/n*100 <<endl;
    
    return 0;
}
