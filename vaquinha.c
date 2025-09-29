#include <stdio.h>
//variavel global
float totalArrecadado = 0;

//procedimento: adiciona a contribuiçao de um participante
void adicionaContribuicao(float valor){

    printf("Contribuicao de R$ %.2f adicinada! tota: R$ %.2f",valor, totalArrecadado)



}

//funcoa: calcula quantidada de carne por pessoa(0.5kg por pessoa)
 

// Procedimento prara mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas)
    float media = totalArrecadado
    printf("\n==== RESUMO CHURRASCO ====\n ");

    printf("Participantes: %d\n",qtdPessoas);
}




int main(){
  int pessoas;
  float valor;

  printf("Digite o numero de participantes");
  scanf("%d",&pessoas);
mostraResumo(pessoas);


}



