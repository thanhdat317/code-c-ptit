#include<stdio.h>
#include<math.h>
int p[2000001];
 void ktao(){
 	//P[i] la uoc nho nhat cua i
 	for(int i = 1; i<=2000000;i++){
 		p[i] = i;
	 }
	 for(int i= 2; i<= sqrt(2000000); i++){
	 	if(p[i]==i){
	 	for(int j = i*i; j<=2000000; j+=i){
	 		if(p[j]==j){
	 			p[j]=i;
			 }
		 }	
		 }
	 }
 }
 int pt(int n){
 	int tong=0;
 	while(n !=1){
 		tong+= p[n];
 		n/=p[n];
	 }
	 return tong;
 }
 int main(){
 	ktao();
 	int t; 
 	scanf("%d",&t);
 	long long tong=0;
 	while(t--){
 		int n; scanf("%d", &n);
 		tong+=pt(n);
	 }
	 printf("%lld\n",tong);
	 return 0;
 }
