#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    char s;
    cin>>t;
    while ( t!=0)
    {
        t--;
        cin>>s;
        (s>='a' && s<='z')? cout<<char(int(s)+int('A')-int('a'))<<endl : cout<<char(int(s)-(int('A')-int('a')))<<endl;
    }

    return 0;
}