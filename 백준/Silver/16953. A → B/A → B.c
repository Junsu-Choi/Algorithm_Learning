#include <stdio.h>

int main(){

	int A,B;
	scanf("%d %d", &A,&B);

	int num=0;

	while(A<B){
		if(B%2==0){
			B/=2;
		}
		else if(B%10==1){
			B/=10;
		}
		else{
			break;
		}
		num++;
	}

	if(A==B){
		printf("%d",num+1);
	}
	else printf("-1");

	return 0;
}