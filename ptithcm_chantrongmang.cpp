#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while (t!=0)
    {
        t--;
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>l;
            if (l%2==0) {cout<<l<<" ";}
        }
        cout<<"\n";
    }
    return 0;
}