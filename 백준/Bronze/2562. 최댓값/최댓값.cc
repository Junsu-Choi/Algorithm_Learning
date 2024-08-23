#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num[10];

    int max=0, index=0;
    for(int i=1; i<10; i++){
        cin >> num[i];

        if(max<num[i]){
            max = num[i];
            index = i;
        }
    }

    cout << max << "\n" << index;
    
    return 0;
}
