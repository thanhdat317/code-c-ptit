#include<stdio.h>
#include<math.h>

void bubblesort(int a[], int n){
	for(int i = 0 ; i< n-1; i++){
		int dem =0;
		for(int j = 0 ; j< n-1-i; j++){
			if(a[j]>a[j+1]){
				int tmp =a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				dem =1;
			}
			}
		if(dem==0) break;
		printf("Buoc %d: ",i+1);
		for(int i = 0 ; i< n ; i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	return 0;
}
