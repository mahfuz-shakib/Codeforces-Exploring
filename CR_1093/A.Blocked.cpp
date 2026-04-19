/*    ~ Bismillahir Rahmanir Rahim ~    */
/*         ~ Rabbi Zidni Ilma ~         */

#include<bits/stdc++.h>
using namespace std;
/*..................................................*/
#define First_IO ios_base:: sync_with_stdio(0); cin.tie(0);
/*..................................................*/
#define int2(x,y) int x,y; cin>>x>>y
#define int1(x) int x; cin>>x
#define int3(x,y,z) int x,y,z; cin>>x>>y>>z
/*..................................................*/
#define char2(x,y) char x,y; cin>>x>>y
#define char1(x) char x; cin>>x
/*..................................................*/
#define string2(s,t) string s,t; cin>>s>>t
#define string1(s) string s; cin>>s
/*..................................................*/
#define ppb pop_back
#define pb push_back
#define ppf pop_front
#define pf push_front
/*..................................................*/
#define in insert
#define e end()
#define b begin()
#define re rend()
#define rb rbegin()
#define all(d) (d).b, (d).e
#define all(v) (v).b, (v).e
#define rall(d) (d).rb, (d).re
#define rall(v) (v).rb, (v).re
#define maxd(d) *max_element(all(d))
#define maxv(v) *max_element(all(v))
#define mind(d) *min_element(all(d))
#define minv(v) *min_element(all(v))
/*..................................................*/
#define yes cout<<"YES"
#define no cout<<"NO"
#define minus1; { cout<<-1; return; }
#define zero; { cout<<0; return; }
#define nl cout<<endl
/*..................................................*/
/*          @author : Mahfuz                        */
/*..................................................*/
const int Mod = 1e9+7;
#define int long long
void acceptTheFlow()
{
    int1(n);
    set<int, greater<int>>s;
    for(int i=0;i<n;i++)
    {
        int1(x);
        s.insert(x);
    }
    if(s.size()==n)
    {
        for(auto x:s) cout <<x<< " ";
        return;
    }
    minus1;
}

signed main()
{
    First_IO
    // int tc=1; 
    int tc;  cin>>tc;
    while(tc--)
    {
        acceptTheFlow();   nl;
    }
    return 0;
}