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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,w;
    cin>>n;
    vvi tree (n+1);
    vector<int> edge (n+1, 0);

    rep(i,0,n-1){
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
        edge[u]++;
        edge[v]++;
    }

    rep(i,0,n/2){
        vector<int> leaves;
        repe(j,1,n){
            if(edge[j] == 1){
                leaves.push_back(j);
            }
        }
        if(leaves.size() < 2){
            break;
        }
        u = leaves[0], v = leaves[1];
        cout<<'?'<<' '<<u<<' '<<v<<endl;
        cout.flush();
        cin>>w;
        if(w == u || w == v){
            cout<<"! "<<w<<endl;
            cout.flush();
            return 0;
        }
        edge[u] = edge[v] = -1;
        iter(it,tree[u]){
            edge[it]--;
        }
        iter(it,tree[v]){
            edge[it]--;
        }
    }
    repe(i,1,n){
        if(edge[i] >= 0){
            cout<<"! "<<i<<endl;
        }
    }
    return 0;
}
//author: saket_tna
