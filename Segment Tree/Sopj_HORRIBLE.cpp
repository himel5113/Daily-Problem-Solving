/*  Problem --> https://www.spoj.com/problems/HORRIBLE/  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 400015
#define endl '\n'
#define mem(a, b) memset(a, b, sizeof(a))

ll tree[mx];
ll lazy[mx];

void shift(ll node, ll b, ll e) {
    if(lazy[node]) {
        tree[node] += ((e - b + 1) * lazy[node]);
        if(b != e) {
            lazy[node << 1] += lazy[node];
            lazy[(node << 1) + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(ll node, ll b, ll e, ll i, ll j, ll v) {
    shift(node, b, e);

    if(b > j || e < i) return;
    if(b >= i && e <= j) {
        tree[node] += ((e - b + 1) * v);
        if(b != e) {
            lazy[node << 1] += v;
            lazy[(node << 1) + 1] += v;
        }
        return;
    }

    ll mid = (b + e) >> 1;
    update(node << 1, b, mid, i, j, v);
    update((node << 1) + 1, mid + 1, e, i, j, v);

    tree[node] = tree[node << 1] + tree[(node << 1) + 1];
}

ll query(ll node, ll b, ll e, ll i, ll j) {
    shift(node, b, e);
    if(b > j || e < i) return 0;
    if(b >= i && e <= j) return tree[node];

    ll mid = (b + e) >> 1;
    ll q1 = query(node << 1, b, mid, i, j);
    ll q2 = query((node << 1) + 1, mid + 1, e, i, j);

    return q1 + q2;
}

void solve() {
    ll n, q; cin >> n >> q;
    mem(tree, 0); mem(lazy, 0);
    while(q--) {
        ll type, left, right;
        cin >> type >> left >> right;
        if(type == 0) {
            ll v; cin >> v;
            update(1, 0, n, left, right, v);
        }
        else {
            cout << query(1, 0, n, left, right) << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}