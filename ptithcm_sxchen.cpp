#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

     ll i,j,k,l,m,n,a[10000];
     cin>>n;
     for (i=1; i<= n ; i++) 
     cin>>a[i];
     multiset<int> t;
     for (i=1; i<=n; i++)
     {
        t.insert(a[i]);
        cout<<"Buoc "<<i-1<<": ";
        for (auto x: t) cout<<x<<" ";
        cout<<"\n";
     }

    return 0;
}