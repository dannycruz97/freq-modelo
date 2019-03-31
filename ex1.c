#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
void altera(char completo[],char prim_ult[]);
int main()
{
    char completo[MAX],prim_ult[MAX];
    printf("Introduza o nome completo: ");
    fgets(completo,MAX,stdin);
    if(completo[strlen(completo)-1]=='\n'){
        completo[strlen(completo)-1]='\0';
    }
    altera(completo,prim_ult);
    return 0;
}

void altera(char completo[],char prim_ult[]){
    int i,k=0,total=0,cont=0;
    for(i=0;i<strlen(completo);i++){
        if(completo[i]==' '){
            total = total + 1;
        }
    }
    for(i=0;i<strlen(completo);i++){
        if(completo[i]!=' ' && cont==0){
            prim_ult[k++]=completo[i];
        }
        if(completo[i]==' '){
            cont++;
            if(cont==total){
                prim_ult[k++]=' ';
            }
        }
        if(completo[i]==' ' && cont!=total){
            prim_ult[k++]=completo[i];
            prim_ult[k++]=completo[i+1];
            prim_ult[k++]='.';
        }
        if(completo[i]!=' ' && cont==total){
            prim_ult[k++]=completo[i];
        }
    }
    prim_ult[k]='\0';
    printf("%s",prim_ult);
}
