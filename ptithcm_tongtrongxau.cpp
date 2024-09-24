#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,n,m,t;
    cin>>t;
    cin.ignore();
    while ( t!=0)
    {
        string s;
        t--;
        cin>>s;
        s=s+'a';l=0;k=0;
        for ( i=0; i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9') { k=k*10 + int(s[i])-48;} else {l=l+k;k=0;}
        }
        cout<<l<<endl;
    }

    return 0;
}