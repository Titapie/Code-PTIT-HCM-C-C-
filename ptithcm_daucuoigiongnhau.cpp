#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s ;
    ll t,i,j,k,l,m,n;
    cin>>t;

    while ( t!=0)
    {
        t--;k=0;
        ll a[int('z')+1]={0};
        cin.ignore();
        cin>>s;
        for ( i=0; i<s.length(); i++)
        {
            a[int(s[i])]++;
            k=k+a[int(s[i])];
        }

        cout<<k<<endl;


    }

    return 0;
}