#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int basket[N+1];
    fill_n(basket,N+1,0);
    int start, end, num;

    for(int i=1; i<=M; i++){
        cin >> start >> end >> num;
        for(int j=start; j<=end; j++){
            basket[j] = num;
        }
    }

    for(int i=1; i<=N; i++){
        cout << basket[i] <<" ";
    }
    
    return 0;
}