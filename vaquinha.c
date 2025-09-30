#include <stdio.h>
//variavel global
float totalArrecadado = 0;

//procedimento: adiciona a contribuiçao de um participante
void adicionaContribuicao(float valor){
    totalArrecadado += valor;
    printf("Contribuição de R$ %.2f Adicionada! Total: R$ %.2f",valor, totalArrecadado)
}





//funcoa: calcula quantidada de carne por pessoa(0.5kg por pessoa)
 float calclaCarne(int qtdPessoa){
  return qtdPessoa * 0.5;
 }

// Procedimento prara mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas)
    float media = totalArrecadado / qtdPessoas;
    printf("\n==== RESUMO CHURRASCO ====\n ");
    printf("Participantes: %d\n",qtdPessoas);
    printf("Carne necesaria : %.2f KG\n", carne);
    printf("Total arrecadado: R$ %.2f\n",totalArrecadado);
    printf("Media por pessoa: R$ %.2f\n",media);
    printf("===================================\n");
}




int main(){
  int pessoas;
  float valor;

  printf("Digite o numero de participantes");
  scanf("%d",&pessoas);

for (int i=1 ; i<= pessoas; i++){
  printf("dDigite a contribuiçao do participante %d:R$", i);
  adicionaContribuicao(valor);
}

mostraResumo(pessoas);


}



