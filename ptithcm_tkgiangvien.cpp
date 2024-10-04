#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class gv {
    public :
        string id;
        string ten;
        string nganh;
        string tt;
        string tenh;
    void nhap(int k)
        {
            id=id+"GV"+char(48+k/10)+char(48+k%10);
            string a,b,c="";
            getline(cin,a);
            getline(cin,b);
            ten=a;
            for (int i=0; i<b.length();i++)
            {
                if (b[i]>='a' && b[i]<='z') b[i]=char(int(b[i])-32);
                if (i==0 || b[i-1]==' ') {c=c+b[i];} 
            }
            nganh=b;
            tt=c;
            for (int i=0; i<a.length();i++)
            {
                if (a[i]>='a' && a[i]<='z') a[i]=char(int(a[i])-32);
            }
            tenh=a;
        }
    bool kt(string s)
    {
       
        for (int i=0; i< tenh.length(); i++)
       {
        bool h= true;
        for ( int j = 0 ; j <s.length(); j++)
        {
            if (s[j]!=tenh[i+j]) {h=false;break;}
        }
        if (h==true) {return true;break;};
       } 
       return false;

    }
};
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    gv n[1000];
    ll t , k;
    cin>>t;k=t;
    cin.ignore();
    while (t !=0)
    {
        t--;
        n[k-t].nhap(k-t);
    }
    cin>>t;
    cin.ignore();
    while ( t!=0 )
    {
        t--;
        string s;
        getline(cin,s);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
        for ( int i = 0 ; i<s.length(); i++)
        if (s[i]>='a' && s[i]<='z') {s[i]=char(int(s[i]-32));}
       
        for (int o=1; o<=k; o++)
        {
           if (n[o].kt(s)==true) 
            cout<<n[o].id<<" "<<n[o].ten<<" "<<n[o].tt<<endl;
        }

    }
    

    return 0;
}
// 3
// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin
// 1
// aN