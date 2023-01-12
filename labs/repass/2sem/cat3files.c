#include<stdio.h>

int main(){
FILE *f1, *f2, *f3, *f;
char c;
f=fopen("file.txt", "w");
f1=fopen("file1.txt", "r");
while(!feof(f1))
{ c=fgetc(f1);
  fputc(c, f);
}
fclose(f1);
f2=fopen("file2.txt", "r");
while(!feof(f2))
{ c=fgetc(f2);
  fputc(c, f);
}
fclose(f2);
f3=fopen("file3.txt", "r");
while(!feof(f3))
{ c=fgetc(f3);
  fputc(c, f);
}
fclose(f3);
fclose(f);
return 0;}
