+
#include<stdio.h>
int main()
{FILE *ar2;
char tira1[MAX];
ar2= fopen("dato02.txt","w");
fputc('b',ar2);
for(x=1; x<10; x++);
fputc('u',ar2);
fputc('e',ar2);
fputc('n',ar2);
fputc('o',ar2);
fputs(tira1,ar2);
fprintf(ar2,"hola x es %d",x);
fputs(tira1,ar2);
}

