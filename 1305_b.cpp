#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define rep(x,t,n) for(ll x = t; x < n; ++x)
#define repe(x,t,n) for(ll x = t; x <= n; ++x)
#define dec(x,t,n) for(ll x = t; x >= n; --x)
#define iter(it,x) for(auto it : x)
#define nl cout<<'\n';
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
#define imax INT_MAX
#define imin INT_MIN
#define f first
#define s second
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define so(x) sizeof(x)
#define mod 1000000007
#define N 100000

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<vector<int> > v;
    vector<int> idx;
    do{
        idx.clear();
        for(int l = 0, r = s.length()-1; l < r; ){
            if(s[l] != '('){
                l++;
            }else if(s[r] != ')'){
                r--;
            }else{
                idx.push_back(l++ + 1);
                idx.push_back(r-- + 1);
            }
        }
        sort(idx.begin(), idx.end());
        for(auto it = idx.rbegin(); it != idx.rend(); ++it){
            s.erase(*it);
        }
        if(idx.size())
            v.push_back(idx);
    }while(idx.size() != 0);

    cout<<v.size();
    nl;
    iter(it,v){
        cout<<it.size();
        nl;
        iter(it1,it){
            cout<<it1<<' ';
        }
        nl;
    }
    return 0;
}
//author: saket_tna
