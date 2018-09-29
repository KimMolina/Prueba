#include<stdio.h>
#include<malloc.h>
#define MAX 15
int main(int argc, char  *argv[])
{
int x,y,z;
struct lista
{
int d;
struct lista *prox;
};
struct lista n1,n2,n3,n4, *act,*ant,*ini,*nue;

n1.d = 5;
n1.prox = &n2;
n2.d = 7;
n2.prox = &n3;
n3.d = 9;
n3.prox = &n4;
n4.d = 11;
n4.prox = NULL;
act = &n1;
while(act != NULL){
printf("%d -->", act->d);
act = act->prox;
}
act=&n4;
for (x=1;x<100;x++){
nue = malloc(sizeof(n1));//n1 dice cuantos bites tiene el struct lista
act->prox = nue;
act->d=x*100;
nue->prox=NULL;
act=nue;
}
act=&n1;
printf("\n");
while(act != NULL){
printf("%d -->", act->d);
act = act->prox;
}
}


