#include<stdio.h>
int main(){int num, rev=0;
  scanf("%d", &num);

  while(num>0){  	          // цикл реверса числа
      rev=rev*10+num%10;   //отделение младшего разряда числа и приписывание к реверсу
      num/=10;}		         // стирание младшего разряда оставшегося числа

printf("%d", rev);
return 0;}
