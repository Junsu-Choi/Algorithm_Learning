#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num[11];
    for(int i=0; i<10; i++){
        cin >> num[i];
    }

    int remainder[11], cnt=0, temp;
    fill_n(remainder, 11, -1);
    for(int i=0; i<10; i++){
        if(cnt == 0){
            remainder[0] = num[i]%42;
            cnt++; 
        }
        else{
            temp = cnt;
            for(int j=0; j<=cnt; j++){
                if(num[i]%42 == remainder[j]){
                    break;
                }
                else if(j == cnt){
                    remainder[j] = num[i]%42;
                    temp++;
                }
            }
            cnt = temp;
        }
    }

    cout << cnt;
    
    return 0;
}