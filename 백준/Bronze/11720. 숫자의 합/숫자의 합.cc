#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    int N;
    cin >> N >> str;

    int sum=0;
    for (int i=0; i<N; i++) {
        sum += static_cast<int>(str[i])-48;
    }

    cout << sum << endl;

    exit(0);
}