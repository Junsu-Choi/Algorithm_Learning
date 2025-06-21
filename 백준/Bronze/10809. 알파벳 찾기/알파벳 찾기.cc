#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin >> str;

    int len = str.length();
    for (int i=97; i<=122; i++) {
        bool exist=0;
        int location;
        for (int j=0; j<len; j++) {
            if (static_cast<int>(str[j])==i) {
                exist=1;
                location=j;
                break;
            }
        }
        if (exist) {
            cout << location << " ";
        }
        else cout << -1 << " "; 
    }

    exit(0);
}