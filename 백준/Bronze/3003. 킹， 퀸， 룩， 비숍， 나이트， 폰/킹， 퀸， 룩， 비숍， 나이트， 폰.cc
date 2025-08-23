#include <bits/stdc++.h>
#define endl "\n"
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define x first
#define y second
#define all(v) v.begin(), v.end()
#define compress(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define lower(v, x) (int)(lower_bound(all(v), x) - v.begin())
#define upper(v, x) (int)(upper_bound(all(v), x) - v.begin())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    fastio;

    int num;
    int numArray[7];

    for (int i=0; i<6; i++) {
        cin >> numArray[i];
    }

    int king = 1-numArray[0];
    int queen = 1-numArray[1];
    int rook = 2-numArray[2];
    int bishop = 2-numArray[3];
    int knight = 2-numArray[4];
    int pawn = 8-numArray[5];

    cout << king << " " << queen << " " << rook << " " << bishop << " " << knight << " " << pawn << endl;

    exit(0);
}