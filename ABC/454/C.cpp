#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using i128 = __int128;
#define lowbit(x) (x) & (-x)
#define vec vector<int>
#define vvec vector<vector<int>>
#define rep(i, a, b) for(int i = (a); i <= (int)(b); ++i)
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double eps = 1e-7;
const int N =  3e5 + 10;
vector<int> adj[N];
bool vis[N];
void dfs(int u){
    for (auto v : adj[u]) {
        if (vis[v]) continue;
        vis[v] = true;
        dfs(v);
    }
}
void solve(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vis[1] = true;
    dfs(1);
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += vis[i];
    }
    cout << cur << "\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) solve();
    return 0;
}
