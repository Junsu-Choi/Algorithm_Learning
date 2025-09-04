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
    
    int i=0, cnt=0;
    while (i<s.length()) {

        if (s[i]=='c') {
            if (i+1<s.length() && s[i+1]=='=') {
                cnt++;
                i+=2;
                continue;
            }
            else if (i+1<s.length() && s[i+1]=='-') {
                cnt++;
                i+=2;
                continue;
            }
            else {
                cnt++;
                i++;
                continue;
            }
        }

        if (s[i]=='d') {
            if (i+1<s.length() && s[i+1]=='z') {
                if (i+2<s.length() && s[i+2]=='=') {
                    cnt++;
                    i+=3;
                    continue;
                }
                else {
                    cnt++;
                    i++;
                    continue;
                }

            }
            else if (i+1<s.length() && s[i+1]=='-') {
                cnt++;
                i+=2;
                continue;
            }
            else {
                cnt++;
                i++;
                continue;
            }

        }

        if (s[i]=='l') {
            if (i+1<s.length() && s[i+1]=='j') {
                cnt++;
                i+=2;
                continue;
            }
            else {
                cnt++;
                i++;
                continue;
            }

        }

        if (s[i]=='n') {
            if (i+1<s.length() && s[i+1]=='j') {
                cnt++;
                i+=2;
                continue;
            }
            else {
                cnt++;
                i++;
                continue;
            }
        }

        if (s[i]=='s') {
            if (i+1<s.length() && s[i+1]=='=') {
                cnt++;
                i+=2;
                continue;
            }
            else {
                cnt++;
                i++;
                continue;
            }
        }

        if (s[i]=='z') {
            if (i+1<s.length() && s[i+1]=='=') {
                cnt++;
                i+=2;
                continue;
            }
            else {
                cnt++;
                i++;
                continue;
            }

        }

        cnt++;
        i++;
    }

    cout << cnt << endl;

    exit(0);
}