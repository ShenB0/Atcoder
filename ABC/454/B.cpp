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
const int N =  2e5 + 10;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> f(m + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    bool flag = true;
    bool is = true;
    for (int i = 1; i <= m; i++) {
        if (f[i] > 1) {
            flag = false;
        } else if (f[i] < 1) {
            is = false;
        }
    }
    if (flag) cout << "Yes\n";
    else cout << "No\n";
    if (is) cout << "Yes\n";
    else cout << "No\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) solve();
    return 0;
}
