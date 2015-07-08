#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct struct_dezena{
    int id_jogo;
    int dezena1;
    int dezena2;
    int dezena3;
    int dezena4;
    int dezena5;
    int dezena6;
} dezena;

void main(){
    struct struct_dezena dezenas[1691];
FILE *input;
FILE *output;
int i;
int temp=0;
input = fopen("sorteios.txt","r");
output = fopen("resultado.txt","w");
for(i=0;i<1691;i++){
    fscanf(input,"%d %d %d %d %d %d %d",&dezenas[i].id_jogo,&dezenas[i].dezena1,&dezenas[i].dezena2,&dezenas[i].dezena3,&dezenas[i].dezena4,&dezenas[i].dezena5,&dezenas[i].dezena6);
}
for(i=0;i<1691;i++){
        fprintf(output,"%d %d %d %d %d %d %d\n",dezenas[i].id_jogo,dezenas[i].dezena1,dezenas[i].dezena2,dezenas[i].dezena3,dezenas[i].dezena4,dezenas[i].dezena5,dezenas[i].dezena6);
}
fclose(input);
}

