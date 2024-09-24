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
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,kt1=0,o,t,v=0,a[101][101]={0},b[401]={0};
    
    o=0;b[1]=2;b[2]=3;kt1=2;
    while (kt1<=20*20) 
    {
        o++;
        if (nt(6*o-1)==true) {kt1++;b[kt1]=6*o-1;}
        if (nt(6*o+1)==true) {kt1++;b[kt1]=6*o+1;}

    }
    cin>>t;
    while(t!=0)
    { t--;v++; cout<<"Test "<<v<<":\n";
    cin>>n;k=0;l=0;
    while (k<n*n)
    {   l++;
        if (k>=n*n-1) {break;}
        for (i=l; i<=n-l+1;i++)
        {   k++;
            a[l][i]=k;
        }
       if (k>=n*n-1) {break;}
        for (i=l+1; i<=n-l;i++)
        {   k++;
            a[i][n-l+1]=k;
        }
        if (k>=n*n) {break;}
        for (i=n-l+1; i>=l+1;i--)
        {   k++;
            a[n-l+1][i]=k;
        }
        if (k>=n*n) {break;}
        for (i=n-l+1; i>=l+1;i--)
        {   k++;
            a[i][l]=k;
        }
        
    }
    if (n%2==1) {a[n/2+1][n/2+1]=n*n;}
    for (i=1; i<=n; i++)
    {
        for ( j=1 ; j<=n; j++)
    cout<<b[a[i][j]]<<" ";
    cout<<"\n";
    }
    }
    return 0;
}