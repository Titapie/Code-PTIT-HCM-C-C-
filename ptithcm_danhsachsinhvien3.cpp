
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct sv {
string ms,ten,ns,lop;
float gpa;
};
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sv n[100];
    ll t,i,j,k,l,m;
    cin>>t;l=0;cin.ignore();
    while (l!=t)
    {
        l++;
        n[l].ms="B20DCCN0";
        n[l].ms=n[l].ms+char(l/10+48)+char(l%10+48);
        getline (cin,n[l].ten);
        while (n[l].ten[0]==' ') n[l].ten.erase(0,1);
        while (n[l].ten[n[l].ns.length()]==' ') n[l].ten.erase(n[l].ns.length(),1);
        string st="";

        for ( i=0; i<n[l].ten.length();i++) 
        if (n[l].ten[i]!=' ') {if (n[l].ten[i-1]==' ' || i==0) st=st+char (toupper(n[l].ten[i])); else st=st+char(tolower(n[l].ten[i])); } 
                                else if (n[l].ten[i]==' ' && n[l].ten[i+1]!=' ') st=st+' ';
        n[l].ten=st;
        cin>>n[l].lop;
        cin>>n[l].ns;
        cin>>n[l].gpa;
        cin.ignore();
        if (n[l].ns[1]=='/') {n[l].ns='0'+n[l].ns;}
        st="";
        for (i=0;i<n[l].ns.length();i++) 
        if ( n[l].ns[i]=='/' && n[l].ns[i+2]=='/') st=st+n[l].ns[i]+'0'; else st=st+n[l].ns[i];
        n[l].ns=st;
    }    
    for (i=1;i<l; i++)
    for (j=i+1; j <= l ; j++)
    if (n[i].gpa<n[j].gpa) swap(n[i],n[j]);
    for (i=1;i<=l; i++)
    cout<<n[i].ms<<" "<<n[i].ten<<" "<<n[i].lop<<" "<<n[i].ns<<" "<<setprecision(2)<<fixed<<n[i].gpa<<endl;
    return 0;
}