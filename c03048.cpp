#include<stdio.h>

int main(){
 	int t;
 	scanf("%d", &t);
 	while(t--){
 		long long n;
 		scanf("%lld", &n);
 		int dem =0, count= 0;
 		while(n>0){
 			long long r=n %10;
 			n= n/10;
 			if(r%2==0){
 				dem++;
			 }else{
			 	count++;
			 }
		 }
	     if(dem>count)printf("YES\n");
	     else printf("NO\n");
	 }
}
