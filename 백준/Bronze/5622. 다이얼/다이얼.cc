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

    int sum = 0;
    for (int i=0; i<s.length(); i++) {
        
        switch (s[i]) {
            case 'A':
            case 'B':
            case 'C':
                sum+=3;
                break;
            case 'D':
            case 'E':
            case 'F':
                sum+=4;
                break;
            case 'G':
            case 'H':
            case 'I':
                sum+=5;
                break;
            case 'J':
            case 'K':
            case 'L':
                sum+=6;
                break;
            case 'M':
            case 'N':
            case 'O':
                sum+=7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                sum+=8;
                break;
            case 'T':
            case 'U':
            case 'V':
                sum+=9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                sum+=10;
                break;     
        }
    }
    
    cout << sum <<endl;

    exit(0);
}