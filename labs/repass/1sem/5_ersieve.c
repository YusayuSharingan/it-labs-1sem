#include<stdio.h>
int main(){const int n=999; int mas[n];

for(int i=2; i<n; i++) mas[i]=1; // заполняем массив единицами (маркерами того что число простое)
                                  // пока что каждому индексу массива (числам от 0 до n) соответствует единица
mas[0]=mas[1]=0; // в инете написано, что 0 и 1 - это непростые числа, поэтому зануляем их маркеры

for(int a=2; a<n/2; a++)   // берем очередное число, например 3
   for(int p=a*a; p<n; p+=a){ /* 3+3=6, значит 3*2=6, значит 6 кратно 3, 
					значит 6 непростое; 3+3+3=9, значит 9 непростое и тд… */
   	mas[p]=0;} // зануляем маркеры всех полученных непростых чисел
              
for(int i=2; i<n; i++) 
  if(mas[i]) printf("%d\n", i); // ну а тут тупо выводи этот список
return 0;}
