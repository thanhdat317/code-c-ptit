#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct leonui{
	int up;
	int down;
};
typedef struct leonui leonui;

int main(){
	int n;
	scanf("%d", &n);
	leonui a[n];
	int tongup = 0, tongdown = 0;
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d", &a[i].up, &a[i].down);
		tongup +=a[i].up;
		tongdown +=a[i].down;
	}
	int min = 1e9;
	if(tongup>tongdown){
		for(int i = 0 ; i< n; i++){
			if(a[i].down<min){
				min = a[i].down;
			}
		}
		printf("%d",tongup+min);
	}else{
		for(int i = 0 ; i< n ; i++){
			if(a[i].up<min){
				min = a[i].up;
			}
		}
		printf("%d",tongdown+min);
	}
}

