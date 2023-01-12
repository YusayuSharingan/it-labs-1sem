#include<stdio.h>

int main(){
int *A, n, m;
printf("Введите макисмальную степень массива\n");
scanf("%d", &n);
A=new int [n];
    printf("Введите коэффициенты начиная с членов больших степеней\n");
for(int i=n; i>=0; i--){
    scanf("%d", &m);A[i-1]=m*i;
    }

for(int i=n-1; i>0; i--){
    if(A[i])
        printf("%dx^%d", A[i], i);
    if(A[i-1]>0)
        printf("+");}
    
if(A[0]) printf("%d", A[0]);
printf("\n");
return 0;}
