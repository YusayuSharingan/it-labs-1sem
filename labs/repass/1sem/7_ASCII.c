#include<stdio.h>
int main(){
for(int i=0; i<128; i++){
printf("%d: ",i);  // код символа выводится через %i
printf("%c\n",i);  // сам символ выводится через %d
}
return 0;
}

