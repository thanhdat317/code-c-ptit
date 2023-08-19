#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float denta= sqrt(b*b-4*a*c);
	if(a==0){
		if(b==0){
			printf("NO");
		}else{
			printf("%0.2f",(float)-c/b);
		}
	}else{
	if(denta<0){
		printf("NO");
	}
	if(denta==0){
		printf("%0.2f",(float)-b/(2*a));
	}
	if(denta>0){
		printf("%0.2f %0.2f",(float)(-b+denta)/(2*a),(float)(-b-denta)/(2*a));
	}
}
return 0;
}

