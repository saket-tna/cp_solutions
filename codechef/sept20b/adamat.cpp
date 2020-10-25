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
    ll n,t,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans = 0;
        int a[n][n];
        rep(i,0,n){
            rep(j,0,n){
                cin>>a[i][j];
            }
        }
        dec(i,n-1,1){
            // cout<<a[0][i]<<' '<<ans<<' '<<(ans & 1);
            // nl;
            if((a[0][i] == i+1) ^ ((ans & 1) == 0)){
                ans++;
            }
        }
        cout<<ans;
        nl;
    }
    return 0;
}
//author: saket_tna
