#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool nt (ll n)
{
    if (n<2) {return false;} else 
    {
        if (n==3 || n == 2) {return true; } else 
        {
            if (n%3==0 || n % 2==0) {return false;} else 
            {
                for (int g = 1 ; g<= (sqrt(n)/1 +1)/6; g++)
                if ( n % (g*6 +1) ==0 || n % (g*6 -1) ==0) {return false;}
            }
        }
    }
    return true;
}
ll tongcs(ll n)
{
    int g=0;
    while (n !=0)
    {
        g=g+n%10;
        n=n/10;
    }
    return g;
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    bool a[40]={false};
    a[1]=true;a[2]=true;a[3]=true;
    a[5]=true; a[8]=true;a[13]=true;
    a[21]=true;a[34]=true;
    cin>>n>>m;
    for (i=min(m,n); i<=max(m,n);i++)
    {
        if (a[tongcs(i)]==true) {if (nt(i)==true) {cout<<i<<" ";}}
    }
    return 0;
}