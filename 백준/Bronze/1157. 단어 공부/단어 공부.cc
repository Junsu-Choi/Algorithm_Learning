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
    string s;
    cin >> s;

    transform(all(s), s.begin(), ::toupper);

    vector<int> v;
    v.resize(30);
    for (int i=0; i<s.length(); i++) {
        for (int j=0; j<26; j++) {
            if (s[i] == 'A'+j) {
                v[j]++;
            }
        }
    }

    int max=0, duplicateData=-1;
    int maxIndex;
    for (int i=0; i<26; i++) {
        if (max < v[i]) {
            max = v[i];
            maxIndex = i;
        }
        else if (max == v[i]) {
            duplicateData = v[i];
        }
    }

    if (max == duplicateData) {
        cout << "?" << endl; 
    }
    else cout << (char)('A'+maxIndex) << endl;

    exit(0);
}