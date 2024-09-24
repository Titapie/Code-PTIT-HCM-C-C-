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

    ll t,i,j,k,l,m,n;
   cin>>t;
   while (t != 0 )
    {
        t--;
      cin>>n;
        if (nt(n)==true) {cout<<"YES\n";} else {cout<<"NO\n";}
    }

    return 0;
}