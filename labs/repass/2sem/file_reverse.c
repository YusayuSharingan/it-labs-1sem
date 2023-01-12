#include<stdio.h>

int main(){
FILE *temp2, *f=fopen("ain.txt", "r");
FILE *temp1=fopen("temp1.txt", "w");
fclose(temp1);
while(!feof(f))
{ char c=fgetc(f);
  temp1=fopen("temp1.txt", "r");
  temp2=fopen("temp2.txt", "w");
  fputc(c, temp2);
  while(!feof(temp1))
  { char t=fgetc(temp1);
    fputc(t,temp2);
  }
  fclose(temp2);
  fclose(temp1);
  temp1=fopen("temp1.txt", "w");
  temp2=fopen("temp2.txt", "r"); 
    while(!feof(temp2))
  { char t=fgetc(temp2);
    fputc(t,temp1);
  }
  fclose(temp1);
  fclose(temp2);
}
fclose(f);
f=fopen("ain.txt", "w");
temp2=fopen("temp2.txt", "r"); 
while(!feof(temp2))
    { char t=fgetc(temp2);
        fputc(t,f);
    }
fclose(temp2);
fclose(f);
return 0;}
