#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000001];
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while (t!=0)
    {
        t--;        
        cin>>n;k=0;l=0;
        bool b[1000001]={0},c[1000001]={0};
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
            if (b[a[i]]==0) {b[a[i]]=1;} else {if (c[a[i]]==0) {c[a[i]]=1;l++;}; k++;}
        }
        cout<<k+l<<endl;
    }
    return 0;
}