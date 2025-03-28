
#include<stdio.h>
#include<math.h>
 int PrimeCheck(int n) {
   if (n < 2) return 0;
   else {
     for (int i = 2; i <= sqrt(n); i++) {
       if (n % i == 0) {
         return 0;
       }
     }
   }
   return 1;
 }
 int main() {
   int t;
   scanf("%d", & t);
   while (t--) {
     long long a, b;
     scanf("%lld %lld", & a, & b);
     int count = 0;
     for (long long i = a; i * i <= b; i++)
       if (PrimeCheck(i)) count++;
     printf("%d\n", count);
   }
 }
