#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000001];
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while(t!=0)
    {
        t--;
        cin>>n>>k;
        
        k=k%n;
        for (i=1; i<=n; i++)
        cin>>a[i];
        for (i=k+1; i<=n ; i++)
        cout<<a[i]<<" ";
        for (i=1; i<=k ; i++)
        cout<<a[i]<<" ";
        cout<<endl;
        
    }

    return 0;
}