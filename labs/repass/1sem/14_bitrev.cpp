#include<stdio.h>

int main(){
int number, num=0, un=0, cnt=0;
scanf("%d", &number);

while(number||cnt%8){
    num=(num<<1)+number%2;
    number>>=1;cnt++;
    if(!(cnt%8)){
        un|=num<<(cnt-8);
        num=0;}
}

printf("%d\n", un);
return 0;    
}
