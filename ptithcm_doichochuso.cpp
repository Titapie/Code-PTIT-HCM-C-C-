#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,t;
    cin>>t;

    while ( t!=0)
    {
        t--;
        string s;
        ll a[100000];
        a[0]=0;k=0;
        cin>>s;string st;a[0]=1;
        ll b[100000];
        for (i=1; i<s.length(); i++)
        {
            if (int(s[i])>int(s[i-1])) {a[i]=a[i-1]+1;if (i==s.length()-1) {k++;b[k]=i;}} else { k++; b[k]=i-1;a[i]=1;if (i==s.length()-1) {k++;b[k]=i;}}
        }
        

    if (k <2) {cout<<"-1\n";} else 
    {
        string st=s;
        for (i=k-1; i>=1; i--)
        {
            
            j=i;int min_c=(47);int min_t=(46);int mvt=-1,vt = -1;
            while (j<k)
            {
                j++;
                for (int h=b[j-1]+1; h<=b[j]; h++)
                {
                    
                    if (int(st[h])<int(st[b[i]])) {mvt=h;} else break;
                }
            if (mvt!=-1 && int(st[mvt])>min_c) {vt=mvt;min_c=int(st[mvt]);}
            }
            if (vt!=-1) {swap(st[b[i]],st[vt]);break;}

        }
        if(st[0]!='0') cout<<st<<"\n"; else{ for (i=1; i<st.length(); i++)cout<<st[i]; cout<<endl;}
        
    }
    }
    
    
    

    return 0;
}