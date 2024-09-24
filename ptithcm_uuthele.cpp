#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool kt(ll n)
{
    ll a=0,b=0;
    while (n!=0)
    {
        if (n %2 ==1) { a++;} else {b++;}
        n=n/10;
    }
    if (a>b) {return true;} else {return false;}
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while (t!=0)
    {
        t--;
        cin>>n;
        if (n%2==0) {cout<<"NO\n";} 
          else
          {
            if (kt(n)==true) {cout<<"YES\n";} else {cout<<"NO\n";}
          }
    }

    return 0;
}