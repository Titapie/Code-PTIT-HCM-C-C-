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
        cin>>n>>m;
        ll a[100001],b[100001];
        set<int> c;
        map<ll,int> d; 
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
            c.insert(a[i]);
            d[a[i]]=1;
        }
        for (i=1; i<=m; i++)
        {
            cin>>b[i];
            c.insert(b[i]);
            if (d[b[i]]==1) {d[b[i]]=2;}
        }
        for (auto x:c) cout<<x<<" ";
        cout<<endl;
        for (auto x:d) if (x.second == 2) cout<<x.first<<" ";cout<<endl;
    }
    return 0;
}