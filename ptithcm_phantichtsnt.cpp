#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n;
    cin>>n;
    for (i=1; i<=n; i++) 
    {
        cin>>l;k=2;
        while (l>1 || k <= l)
        {
            if (l % k == 0 ) {cout <<k<<" "; l=l/k;} else {k++;}
        }
        cout<<"\n";
    }

    return 0;
}