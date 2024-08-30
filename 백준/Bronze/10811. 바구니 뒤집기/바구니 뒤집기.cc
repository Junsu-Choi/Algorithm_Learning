#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    cin >> N >> M;

    int array[N+1];
    for(int i=1; i<N+1; i++){
        array[i] = i;
    }
    int start, end;
    for(int i=0; i<M; i++){
        cin >> start >> end;
        reverse(array+start, array+end+1);
    }

    for(int i=1; i<N+1; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}