#include<stdio.h>
#include<math.h>

int main(){int d=1;
double num;
scanf("%lf", &num);
while((int)num!=(int)ceil(num)){
    d*=10; num*=10;}
printf("%ld/%d\n", (long int) num/10, d/10);
return 0;}
