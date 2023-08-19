#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void reverse(int c[], int n){
	int l =0, r= n-1;
	while(l<=r){
		int tmp = c[l];
		c[l]= c[r];
		c[r]=tmp;
		++l;--r;
	}
}
// quy dinh a la so lon hon trong 2 so
void sub(char a[], char b[]){
	int n1 = strlen(a);
	int n2 = strlen(b);
	int x[n1],y[n1], z[n1], n=0;
	for(int i = 0 ; i< n1; i++){
		x[i]=a[i]-'0';
	}
	for(int i = 0 ; i< n2; i++){
		y[i]=b[i]-'0';
	}
	reverse(x,n1); reverse(y,n2);
	for(int i = n2; i<n1; i++){
		y[i]=0;
	}
	int muon =0;
	for(int i = 0 ; i<n1; i++){
		int tmp = x[i]-y[i]-muon;
		if(tmp<0){
			muon =1;
			z[n++]=10+tmp;
		}else{
			z[n++]=tmp;
			muon =0;
		}
	}
	// xu ly th nhieu so o dau nhu: 0000010
	int oke =0;
	for(int i = n-1; i>=0; i--){
		if(oke ==0&&z[i] != 0){
			oke =1;
		}
		if(oke ==1){
			printf("%d",z[i]);
		}
	}
	if(oke ==0){
		printf("0");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1000], b[1000];
		scanf("%s %s",a,b);
		if(strlen(a)>strlen(b)|| strlen(a)==strlen(b)&& strcmp(a,b)>0){
			sub(a,b);
		}else{
			sub(b,a);
		}
		printf("\n");
	}
}
