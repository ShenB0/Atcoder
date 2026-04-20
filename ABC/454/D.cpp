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
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    stack<char> stk;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            cur++;
        } else if (s[i] == ')' && cur == 2 && !stk.empty() && stk.top() == '(') {
            stk.pop();
        } else {
            for (int j = 0; j < cur; j++) stk.push('x');
            stk.push(s[i]);
            cur = 0;
        }
    }
    for (int i = 0; i < cur; i++) stk.push('x');
    string a1;
    while (!stk.empty()) {
        a1 = stk.top() + a1;
        stk.pop();
    }
    cur = 0;
    for (int i = 0; i < m; i++) {
        if (t[i] == 'x') {
            cur++;
        } else if (t[i] == ')' && cur == 2 && !stk.empty() && stk.top() == '(') {
            stk.pop();
        } else {
            for (int j = 0; j < cur; j++) stk.push('x');
            stk.push(t[i]);
            cur = 0;
        }
    }
    for (int i = 0; i < cur; i++) stk.push('x');
    string a2;
    while (!stk.empty()) {
        a2 = stk.top() + a2;
        stk.pop();
    }
    if (a1 == a2) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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
