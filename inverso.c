#include<stdio.h>
#define MAX 20
int main
{
FILE *ar1,*ar2;
ar1=fopen("datos01.txt","r");
ar2=fopen("datos02.txt","w");
char tira1[MAX],tira2[MAX];
fgets(tira1,6,ar1);
printf("Orden correcto\n");
if(!feof(ar1)){
printf("%s",tira1);
fputs(tira1,ar1)
fgets(tira1,7,ar1);
if(ar2==NULL){
printf("Error archivo no existente\n");
return -1;
}
else{
fgets(tira1,3,ar2);
printf("Archivo inverso\n");
while(!feof(ar2)){
print("%s",tira1);
fputs(tira1,ar1);
fgets(tira1,7,ar2);
}
}
fclose(ar1);
fclose(ar2);
}

