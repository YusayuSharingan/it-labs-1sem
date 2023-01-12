#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *f=fopen("ain.txt", "r");
int n, m, **mtr;
fscanf(f, "%d %d", &n, &m);
//================================
mtr=(int**)malloc(sizeof(int*)*n);
for(int i=0; i<n; i++) 
  mtr[i]=(int*)malloc(sizeof(int)*m);
//================================
for(int i=0; i<n; i++)
  for(int j=0; j<m; j++)
    fscanf(f, "%d", &mtr[i][j]);
fclose(f);
//===============================
f=fopen("ain.txt", "w");
fprintf(f, "%d %d\n", m, n);
for(int j=0; j<m; j++)
 { for(int i=0; i<n; i++)
     fprintf(f, "%d ", mtr[i][j]);
   fprintf(f, "\n");
 }
fclose(f);
return 0;}
