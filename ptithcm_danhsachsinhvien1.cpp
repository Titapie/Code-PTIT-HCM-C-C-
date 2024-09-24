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
        cin>>n[l].lop;
        cin>>n[l].ns;
        cin>>n[l].gpa;
        cin.ignore();
        if (n[l].ns[1]=='/') {n[l].ns='0'+n[l].ns;}
        cout<<n[l].ms<<" "<<n[l].ten<<" "<<n[l].lop<<" ";
        for (i=0;i<n[l].ns.length();i++) 
        if ( n[l].ns[i]=='/' && n[l].ns[i+2]=='/') cout<<n[l].ns[i]<<"0"; else cout<<n[l].ns[i];
        cout<<" ";
        cout<<setprecision(2)<<fixed<<n[l].gpa<<endl;


    }    

    return 0;
}