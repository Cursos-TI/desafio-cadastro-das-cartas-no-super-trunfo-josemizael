#include <stdio.h>

int main() {
 
  float area;         // area da cidadede em km²
 double pib;          // PIB de cada cidade em milhões
 int pontos_turisticos; // numero de pontos turisticos
 char codigo[100];    // codigo da cidade,A01,A02,A03...
 int populacao;      // pupulação da cidade e estado 
 char opicao[30];
 char nome[40];
 


 //seu pais
 printf("//sua duas carta sera do pais Brasil, ok?\n" );
 scanf("%s", opicao);
 printf("sua opicao: %s\n", opicao);


 // esta sera a primeira carta a ser feita.
 printf("primeria carta:\n");
 printf("escolha o nome da sua primeira carta\n");
 scanf("%s", nome);
 printf("// escreva o codigo da cidada, ex:A01\n");   //codigo da cidade 
 printf("escreva o codigo da sua carta:\n");        //codigo 
 scanf(" %s", codigo);                         
 printf("digite quantas populacoes possui:\n");  //pergunta sobre quantiade da população
 scanf("%d", &populacao );                      
 printf("digite a area da cidade:\n");            //perguta sobre area 
 scanf("%f", &area);
 printf("qual e o pib da cidade:\n");               //pergunta sobre PIB
 scanf("%lf", &pib);
printf("quantos pontos turisticos possui na cidade:\n"); //pergunta sobre pontos turisticos
 scanf("%d", &pontos_turisticos);

 //cadastro da carta 
 printf("estado A\n");
 printf("codigo: %s\n", codigo);
 printf("nome da carta: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);
  




  //segunda carta
 printf("segunda carta:\n");
  printf("escolha nome da sua carta/cidade\n");  //nome da carta 
  scanf("%s",nome);
  printf("// escreva o codigo da carta porfavor,ex:B02\n");   //codigo da sua carta 
  printf("escreva o codigo da sua carta:\n");        //codigo 
  scanf(" %s", codigo);
  printf("qual e o numero de populacoes que possui a sua carta:\n"); //numero de populaçoes
  scanf("%d", &populacao);
  printf("digide a area da cidade:\n");  //area da cidade
  scanf("%f", &area);
  printf("qual e o pib da sua cidade:\n"); // PIB da sua carta/cidsde
  scanf("%lf", &pib);
  printf("quantos pontos turisticos possui:\n");  //pontos turisticos
  scanf("%d", &pontos_turisticos);
 
 
 //cadastro da carta
 printf("estado:B\n");
  printf("codigo da cidade: %s\n", codigo);
 printf("nome da cidade: %s\n", nome);
  printf("populacao da cidade: %d\n", populacao);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);

 

 return 0;
}
