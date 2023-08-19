#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double x1, y1, x2,y2,x3,y3;
		double a,b,c ,s ;
		scanf("%lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3);
		 a= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		 b= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
		 c= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		 if(a+b <= c||c+a<=b||b+c<=a){
		 	printf("INVALID\n");
		 }else{
		 	double p = (double)((a+b+c)/2);
		 	s = (double)(sqrt(p*(p-a)*(p-b)*(p-c)));
		 	printf("%.2lf\n",s);
		 }
	}
}
