#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a[100001],t,i,j,k,l,m,n,o,d[100000];
    cin>>t;
    while (t!=0)
    {
       t--; map<ll,ll> b,s;k=0; multimap<ll,ll> c;
       cin>>n; l=0; k=0;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        if (b.count(a[i])==0) { l++; d[l]=a[i];b[a[i]]=1;s[l]=a[i];} else {b[a[i]]=b[a[i]]+1;}
    }
    
    for (auto x:s)
    {
     c.insert({b[x.second],x.first}); 
    }
     
    i=0;
   for (auto it=c.rbegin(); it!=c.rend(); it++)
    {
        i++;
            a[i]=it->first;d[i]=it->second;
         
    }
    o=0;j=1;
    while (j<=l)
    {   o++;
        if (a[j+o]!=a[j]) { for (i=j+o-1;i>=j; i--) for (k=1; k<= a[i];k++ ) cout<<s[d[i]]<<" "; j=j+o;o=0;}
    }
    cout<<"\n";
    }
    return 0;
}