#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		float x1, y1, x2,y2,x3,y3;
		float a,b,c,chuvi;
		scanf("%f %f %f %f %f %f",&x1, &y1, &x2, &y2, &x3, &y3);
		 a= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		 b= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
		 c= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		 if(a+b<=c||a+c<=b||b+c<=a){
		 	printf("INVALID\n");
		 }else{
		 	chuvi = a+b+c;
		 	printf("%.3f\n",chuvi);
		 }
	}
}
