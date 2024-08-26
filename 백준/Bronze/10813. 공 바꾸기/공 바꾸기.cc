#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int basket[N+1];
    for(int i=1; i<N+1; i++){
        basket[i] = i;
    }

    int num1, num2, temp;
    for(int i=0; i<M; i++){
        cin >> num1 >> num2;
        temp = basket[num1];
        basket[num1] = basket[num2];
        basket[num2] = temp;
    }

    for(int i=1; i<N+1; i++){
        cout << basket[i] <<" ";
    }
    
    return 0;
}