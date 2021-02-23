#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    int a,b,c;
    a=b=c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a+=x;
    }

    for (int i = 0; i < n-1; i++)
    {
        cin>>x;
        b+=x;
    }

    for (int i = 0; i < n-2; i++)
    {
        cin>>x;
        c+=x;
    }
    
    cout<<a-b<<endl;
    cout<<b-c<<endl;

    return 0;
}
