#include<stdio.h>
int main(){
int *first;
int *second;
int now, i,k, n1, n2;

printf("Макс степень первого\n");

scanf("%d", &n1);		//считывание максимальной степени первого многочлена

printf("коэффициенты первого\n");
first= new int [n1+1];
for(i=0; i<n1+1; i++) scanf("%d", &first[i]);	// считывание элементов первого многочлена

printf("Макс степень второго\n");
scanf("%d", &n2);		//считывание максимальной степени второго многочлена
second= new int [n1+n2+1+1];
for (i=0; i<n1+n2+1; i++){second[i]=0;}
printf("коэффициенты второго\n");
for(k=0; k<n2+1; k++){scanf("%d",&now);		//считывание элементов второго многочлена
	for(i=0; i<n2+1; i++){
	    second[k+i]=second[k+i]+first[i]*now;  //перемножение коэфф-тов и суммирование
        printf("_%d_", second[k+i]);
	}}

for(k=n2+n1; k>1;k--) 
	if (second[k]>0)
		 printf("%d*x^%d+",second[k], k); //вывод с учетом знаков
k--;
if(second[k]>0)printf("%d\n", second[k]);  //вывод члена с нулевой степенью
return 0;}
