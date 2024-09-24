#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll i,j,k,l,m,n,t; bool kt=true;
    cin>>t;
    while (t !=0 )    
    {
        t--;kt=true;
        cin>>n;
    
    while (n !=0)
    {
        if ( (n%10)%2==1) {kt=false; break;}
        n=n/10;
    }
    if (kt==true) {cout<<"YES\n";} else {cout<<"NO\n";}
    }

    return 0;
}