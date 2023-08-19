#include<stdio.h>
int sum(int n){
 int s=0;
 while(n>0){
 	int t= n%10;
 	s+=t;
 	n/=10;
 }
 return s;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int t;
		scanf("%d",&t);
		printf("%d\n",sum(t));
	}
	return 0;
	
}
