#include <iostream>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    cout << fixed;
    cout.precision(10);
    cout << double(x)/y;

    return EXIT_SUCCESS;
}