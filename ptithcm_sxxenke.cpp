#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,t;
    cin>>t;
    while(t!=0)
    {
        t--;
        cin>>n;
        ll a[100001];
        for (i=1;i<=n;i++)
        cin>>a[i];
        sort(a+1,a+1+n);
        int d=1,c=n;
        for ( i=1;i<=n; i++)
        {
            if ( i%2==1) {cout<<a[c]<<" ";c--;} else {cout<<a[d]<<" "; d++;}
        }
        cout<<endl;
    }

    return 0;
}