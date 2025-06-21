#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    int test_case, len;

    cin >> test_case;

    for (int i=0; i<test_case; i++) {
        cin >> str;
        len = str.length();
        cout << str[0] << str[len-1] << endl;
    }

    exit(0);
}