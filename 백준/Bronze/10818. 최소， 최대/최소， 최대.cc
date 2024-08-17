#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int array[N], min = 1000001, max = -1000001;
    for(int i=0; i<N; i++){
        cin >> array[i];

        if(array[i]<min){
            min = array[i];
        }

        if(array[i]>max){
            max = array[i];
        }
    }

    cout << min << " " << max;
    
    return 0;
}