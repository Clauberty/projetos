//Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
#include <stdio.h>
#include <stdlib.h>

int main(){

int N, valor;

  scanf("%d", &N);

  for(int i = 1; i<=N; i++){
    scanf("%d", &valor);
    if(valor == 0){
    printf(" NULL\n");
    }   
    
else{
  
if(valor % 2 == 0){
  printf(" EVEN "); //par
  
} 
else{
printf(" ODD "); //impar
}
  if(valor > 0){
printf(" POSITIVE\n "); //positivo
  }
    else{
    printf(" NEGATIVE\n "); //negativo
  }
  }
  }
  return 0;
}