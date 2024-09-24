#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct nv{
    string ms,gt,ten,ns,dc,mst,nk;
};
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t,i,j,k,l,m;
    nv n[100];
    cin>>t;cin.ignore();

    l=0;
    while (l!=t)
    {
        l++;n[l].ms="00";
        n[l].ms=n[l].ms+char(l/100+48)+char((l%100)/10+48)+char((l%10)/1+48);
        getline(cin,n[l].ten);
        cin>>n[l].gt>>n[l].ns;
        if (n[l].gt.length()==3)
        n[l].gt="Nam"; else  
        n[l].gt="Nu";
          
        cin.ignore();
        getline(cin,n[l].dc);
        
        cin>>n[l].mst>>n[l].nk;
        cin.ignore();
        string st;
        if (n[l].ns[1]=='/') {n[l].ns='0'+n[l].ns;}
        st="";
        for (i=0;i<n[l].ns.length();i++) 
        if ( n[l].ns[i]=='/' && n[l].ns[i+2]=='/') st=st+n[l].ns[i]+'0'; else st=st+n[l].ns[i];
        n[l].ns=st;
        
        if (n[l].nk[1]=='/') {n[l].nk='0'+n[l].nk;}
        st="";
        for (i=0;i<n[l].nk.length();i++) 
        if ( n[l].nk[i]=='/' && n[l].nk[i+2]=='/') st=st+n[l].nk[i]+'0'; else st=st+n[l].nk[i];
        n[l].nk=st;
        
    }
    
    for (l=1; l<=t; l++)
    cout<<n[l].ms<<" "<<n[l].ten<<" "<<n[l].gt<<" "<<n[l].ns<<" "<<n[l].dc<<" "<<n[l].mst<<" "<<n[l].nk<<endl;

    return 0;
}
// 3
// Nguyen Van A
// Nam
// 10/22/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 31/12/2013
// Ly Thi B
// Nu
// 10/15/1988
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011
// Hoang Thi C
// Nu
// 04/02/1981
// Mo Lao-Ha Dong-Ha Noi
// 8333012347
// 22/08/2011