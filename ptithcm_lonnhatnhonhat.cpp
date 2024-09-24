#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k=0,l,s,m,n;
    cin>>m>>s;
    string ss="",st="";
    while (s>=9&& k<m)
    {
        k++;
        s=s-9;
        ss=ss+'9';
        st=st+'9';
    }
    if (ss.length()==m && s>0) {cout <<"-1 -1";} else {if (ss.length()==m && s==0) cout<<st<<" "<<ss; else

    if ( ss.length()<m) {
                           ss=ss+char(s+48); l = ss.length() ; for ( i=1; i<=m-l; i++) ss=ss+'0'; 
                           
                           if ( s>1 ) {
                                    if (m-l>=2) 
                                        {st=char(s-1+48)+st;l=st.length(); for ( i=1; i<m-l; i++) st='0'+st;st='1'+st;}
                                         else st=char(s+48)+st;
                                      }
                           else {l=st.length(); for ( i=1; i<m-l; i++) st='0'+st;st=char(s+48)+st;}
    if (ss==st) cout<<"-1 -1"; else cout<<st<<" "<<ss;
    }
    }
    
    return 0;
}