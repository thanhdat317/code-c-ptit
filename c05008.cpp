#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int k = 1; k<=t; k++){
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	for(int i = 0 ; i< m ; i++){
		for(int j = 0 ; j< n ; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max = 0, index_h , index_c;
	for(int i = 0 ; i< m ; i++){
		int t_hang = 0;
		for(int j = 0; j< n; j++){
			t_hang+=a[i][j];
		}
		if(t_hang > max){
			max = t_hang;
			index_h = i;
		}
	}
	max = 0;
	for(int j = 0 ; j< n; j++){
		int t_cot = 0;
		for(int i = 0 ; i< m ;i++){
			if( i != index_h) t_cot+=a[i][j];
		}
		if(t_cot > max){
			max = t_cot;
			index_c = j;
		}
	}
	printf("Test %d:\n",k);
	for(int i = 0 ; i< m ; i++){
		if(i != index_h){
			for(int j = 0 ; j< n ; j++){
				if(j != index_c)
					printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
} 
}
