#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;bool kt;
    cin>>t;
    while (t!=0)
    {
        t--; k=0;
        cin>>n;
        if (n<10) {cout<<"YES\n";} else 
        {  
            l=n%10; n=n/10; kt=true;
        while (n!=0)
        {
            k=n%10;
        if (k>l) { kt=false; break;}
            n=n/10;
        }
        if (kt==true) {cout<<"YES\n";} else {cout<<"NO\n";}
        }
    }

    return 0;
}