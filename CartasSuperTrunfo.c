#include <stdio.h>

int main() {
 
  float area1, area2;         // area da cidadede em km²
 double pib1, pib2;         // PIB de cada cidade em milhões
 int pontos_turisticos1, pontos_turisticos2; // numero de pontos turisticos
 char codigo1[100], codigo2[100];   // codigo da cidade,A01,A02,A03...
 int populacao1, populacao2;      // pupulação da cidade e estado 
 char opicao[30];
 char nome[40];
 


 //seu pais
 printf("//sua duas carta sera do pais Brasil, ok?\n" );
 scanf("%s", opicao);
 printf("sua opicao: %s\n", opicao);


 // esta sera a primeira carta a ser feita.  //entrada de dados
 printf("primeria carta:\n");
 printf("escolha o nome da sua primeira carta\n");
 scanf("%s", nome);
 printf("// escreva o codigo da cidada, ex:A01\n");   //codigo da cidade 
 printf("escreva o codigo da sua carta:\n");        //codigo 
 scanf(" %s",codigo1);                         
 printf("digite quantas populacoes possui:\n");  //pergunta sobre quantiade da população
 scanf("%d", &populacao1 );                      
 printf("digite a area da cidade:\n");            //perguta sobre area 
 scanf("%f", &area1);
 printf("qual e o pib da cidade:\n");               //pergunta sobre PIB
 scanf("%lf", &pib1);
printf("quantos pontos turisticos possui na cidade:\n"); //pergunta sobre pontos turisticos
 scanf("%d", &pontos_turisticos1);

 //cadastro da carta //saida de dados
 printf("estado A\n");
 printf("codigo: %s\n", codigo1);
 printf("nome da carta: %s\n", nome);
 printf("populacao: %d\n", populacao1);
 printf("PIB: R$ %.2f milhoes\n", pib1);
 printf("area: %.2f km2\n", area1);
 printf("pontos turisticos: %d\n", pontos_turisticos1);
  




  //segunda carta //entrada de dados
 printf("segunda carta:\n");
  printf("escolha nome da sua carta/cidade\n");  //nome da carta 
  scanf("%s",nome);
  printf("// escreva o codigo da carta porfavor,ex:B02\n");   //codigo da sua carta 
  printf("escreva o codigo da sua carta:\n");        //codigo 
  scanf(" %s", codigo2);
  printf("qual e o numero de populacoes que possui a sua carta:\n"); //numero de populaçoes
  scanf("%d", &populacao2);
  printf("digide a area da cidade:\n");  //area da cidade
  scanf("%f", &area2);
  printf("qual e o pib da sua cidade:\n"); // PIB da sua carta/cidsde
  scanf("%lf", &pib2);
  printf("quantos pontos turisticos possui:\n");  //pontos turisticos
  scanf("%d", &pontos_turisticos2);
 
 
 //cadastro da carta //saida de dados
 printf("estado:B\n");
  printf("codigo da cidade: %s\n", codigo2);
 printf("nome da cidade: %s\n", nome);
  printf("populacao da cidade: %d\n", populacao2);
  printf("pib da cidade: R$ %.2f milhoes\n", pib2);
  printf("area: %.2f km2\n", area2);
  printf("pontos turisticos: %d\n", pontos_turisticos2);

 

 return 0;
}
