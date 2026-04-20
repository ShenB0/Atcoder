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
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (n % 2 || (a + b) % 2 == 0) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    string L = "", R = ""; 
    int r1 = 1, r2 = n, c1 = 1, c2 = n;
    while (r2 - r1 + 1 > 2) {
        if (a > r1 + 1) {
            for (int i = c1; i < c2; ++i) L += 'R';
            L += 'D';
            for (int i = c2; i > c1; --i) L += 'L';
            L += 'D';
            r1 += 2;
        } else if (a < r2 - 1) {
            for (int i = c2; i > c1; --i) R = 'L' + R;
            R = 'U' + R;
            for (int i = c1; i < c2; ++i) R = 'R' + R;
            R = 'U' + R;
            r2 -= 2;
        } else break;
    }
    while (c2 - c1 + 1 > 2) {
        if (b > c1 + 1) {
            for (int i = r1; i < r2; ++i) L += 'D';
            L += 'R';
            for (int i = r2; i > r1; --i) L += 'U';
            L += 'R';
            c1 += 2;
        } else if (b < c2 - 1) {
            for (int i = r2; i > r1; --i) R = 'U' + R;
            R = 'L' + R;
            for (int i = r1; i < r2; ++i) R = 'D' + R;
            R = 'L' + R;
            c2 -= 2;
        } else break;
    }
    if (a == r1 && b == c1 + 1) L += "DRD";
    else L += "RDR";
    cout << L << R << "\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
