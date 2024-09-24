#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool kt(char a, char b)
{
    return int(a)>int(b);
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,t;
    cin>>t;
    cin.ignore();
    while ( t!=0)
    {
        t--;
        string s; int st[int('Z')+1]={0};k=0;
        cin>>s;
        for ( i=0; i<s.length();i++)
        if (s[i]>='0' &&s[i]<='9') {k=k+int(s[i])-48;} else st[int(s[i])]++;
        for (i=int('A'); i<=int('Z'); i++)
    if (st[i]!=0) {for ( j=1; j<=st[i]; j++) cout<<char(i);}
cout<<k<<endl;

    }

    return 0;
}