#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rollBook[31];
    for(int i=1; i<31; i++){
        rollBook[i] = i;
    }

    int num;
    for(int i=1; i<=28; i++){
        cin >> num; 
        rollBook[num] = 0;
    }

    int cnt = 0;
    for(int i=1; i<=30; i++){

        if(rollBook[i] != 0){
            cout << rollBook[i] << " ";
            cnt++;
            if(cnt == 2) break;
        }
    }
    
    return 0;
}