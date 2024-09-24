#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct nv{
    ll m,d,y;
    string ms,gt,ten,ns,dc,mst,nk;
    
};
bool dk(nv a,nv b)
{
   
   if (a.y!=b.y) return a.y<b.y;

   // if ( a.m!=a.m) return a.m<b.m; else;
    
    return a.d<b.d;
}

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t,i,j,k,l,m;
    nv n[100];
    cin>>t;
    l=0;
    while (l<t)
    {
        l++;
        k=l;
        for (i=1; i<=5; i++)
        {
            n[l].ms=char(k%10 + 48)+n[l].ms;
            k=k/10;
        }


        cin.ignore();

        getline(cin,n[l].ten);
        
        cin>>n[l].gt;

        cin>>n[l].ns;        
        cin.ignore();
        getline(cin,n[l].dc);
        
        cin>>n[l].mst;
        cin>>n[l].nk;

        n[l].y=(int(n[l].ns[6])-48)*1000+(int(n[l].ns[7])-48)*100+(int(n[l].ns[8])-48)*10+(int(n[l].ns[9])-48);
        n[l].m=(int(n[l].ns[3])-48)*10+(int(n[l].ns[4])-48);
        n[l].d=(int(n[l].ns[0])-48)*10+(int(n[l].ns[1])-48);
        
    }
    
    sort(n+1,n+1+t,dk);
    
    for (l=1; l<=t; l++)
    cout<<n[l].ms<<" "<<n[l].ten<<" "<<n[l].gt<<" "<<n[l].ns<<" "<<n[l].dc<<" "<<n[l].mst<<" "<<n[l].nk<<" "<<endl;

    return 0;
}
// 3
// Nguyen Van A
// Nam
// 10/06/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 09/06/1982
// Ly Thi B
// Nu
// 09/07/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011
// Hoang Thi C
// Nu
// 04/02/1981
// Mo Lao-Ha Dong-Ha Noi
// 8333012347
// 22/08/2011