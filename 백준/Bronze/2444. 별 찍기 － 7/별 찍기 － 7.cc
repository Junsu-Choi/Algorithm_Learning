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
    int n;
    cin >> n;

    for (int lineCount=1; lineCount<=2*n-1; lineCount++) {
        if (n!=0) {
            int spaceCount = abs(n-lineCount);
            for (int spacePrint=1; spacePrint<=spaceCount;spacePrint++) {
                cout << " ";
            }
        }
        int starCount=2*lineCount-1;
        if (lineCount>n) {
            starCount=2*(2*n-lineCount)-1;
        }

        for (int starPrint=1; starPrint<=starCount; starPrint++) {
            cout << "*";
        } cout << endl;
    }

    exit(0);
}