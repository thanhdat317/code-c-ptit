#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i =1; i<= n; i++){
		int dis = n-1, init = i;
		for(int j =1; j <= i; j++){
			printf("%d ",init);
			init+=dis;
			dis--;
		}
		printf("\n");
	}
}
