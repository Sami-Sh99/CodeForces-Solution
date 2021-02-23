#include<iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    const int MAX=100000;
    int a[MAX+5]={0};

    string s;
    cin>>s;
    int count=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1])
            count++;
        a[i]=count;
    }
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
