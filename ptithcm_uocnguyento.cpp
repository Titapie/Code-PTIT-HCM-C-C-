#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100001]={0},b[100001]={0};
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
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t,i,j,k,l,m,n,o;
    l=0;
    for ( i=2; i*i<=100000;i++)
    {
        if (a[i]==0) {l++;b[l]=i;for ( j= i*i; j<=100000; j=j + i) a[j]=i; }
    
    }
    a[1]=1;a[0]=1;
    cin>>t;
    while ( t!=0)
    {
        
        t--;
        cin>>n;
        if ( nt (n)==1) {cout<<n<<endl;}
        else 
        {
        for (i=2; i<=sqrt(n); i++)
        {
            while (n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        if (n<=1) {break;} 
        }
        if (n>=2) cout<<n;cout<<endl;}

    }
    return 0;
}