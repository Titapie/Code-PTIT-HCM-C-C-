#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,n,m; 
        string s,st;
  
    cin>>s;
    for( i=0; i<s.length(); i++) 
    if (char(toupper(s[i]))!='A' &&char(toupper(s[i]))!='E' && char(toupper(s[i]))!='O' &&char(toupper(s[i]))!='I' &&char(toupper(s[i]))!='U' &&char(toupper(s[i]))!='Y' )
    st=st+'.'+ char(tolower(s[i]));
    cout<<st<<endl;

    return 0;
}