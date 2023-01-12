#include<stdio.h>
int main(){int num, rev=0, copy;

  scanf("%d", &num); copy=num;
  while(num>0){
      rev=rev*10+num%10;num/=10;}

  if(rev==copy)printf("true\n");
  else printf("false\n");
  return 0;
}
