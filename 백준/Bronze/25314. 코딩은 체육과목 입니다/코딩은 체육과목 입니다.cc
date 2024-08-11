#include <iostream>

using namespace std;

int main(){

    int bit, cnt;
    cin >> bit;

    cnt = bit/4;

    for(int i=0; i<cnt; i++){
        cout << "long ";
    }
    cout << "int";
    
    return 0;
}
