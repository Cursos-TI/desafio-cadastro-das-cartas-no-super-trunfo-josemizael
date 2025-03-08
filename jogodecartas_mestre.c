#include <stdio.h>
  
  int main() {
   //declaraçao da carta 1 
  float area1;         // area da cidadede em km²
  float pib1;         // PIB de cada cidade em milhões
  double pib_per_capita1, densidade_populacional1; // cartta 1
  int pontos_turisticos1; // numero de pontos turisticos
  char codigo1[100];   // codigo da cidade,A01,A02,A03...
 int populacao1;      // pupulação da cidade e estado 
 float super_poderes1;
 char opicao[30];
  

  //declaraçao da carta 2
  float area2;
  float pib2;
  double pib_per_capita2 , densidade_populacional2;
  int pontos_turisticos2;
  char codigo2[100];
  int populacao2; 
  float superpoderes2;


  //seu pais
  printf("//sua duas carta sera do pais Brasil, ok?\n" );
  scanf("%s", opicao);
  printf("sua opicao: %s\n", opicao);
 
 
  // esta sera a primeira carta a ser feita.  //entrada de dados
  printf("primeria carta:\n");
  printf("nome: rio de janeiro.\n");
  printf("// escreva o codigo da cidada, ex:A01\n");   //codigo da cidade 
  printf("escreva o codigo da sua carta:\n");        //codigo 
  scanf(" %s",codigo1);                         
  printf("digite quantas populacoes possui:\n");  //pergunta sobre quantiade da população
  scanf("%d", &populacao1 );                      
  printf("digite a area da cidade:\n");            //perguta sobre area 
  scanf(" %f", &area1);
  printf("qual e o pib da cidade:\n");               //pergunta sobre PIB
  scanf(" %f", &pib1);
  printf("quantos pontos turisticos possui na cidade:\n"); //pergunta sobre pontos turisticos
  scanf("%d", &pontos_turisticos1);
 
   // Cálculo do PIB per capita
   pib_per_capita1 = pib1 / populacao1;
 
   // Cálculo da densidade populacional
   densidade_populacional1 = populacao1 / area1;
   
   //calculo do super poder
   super_poderes1= populacao1 + pib1 + area1 + pontos_turisticos1 +pib_per_capita1 + densidade_populacional1;



  //cadastro da carta //saida de dados
  printf("nome:rio de janeiro.");
  printf("estado A\n");
  printf("codigo: %s\n", codigo1);
  printf("populacao: %d\n", populacao1);
  printf("area: %.2f km2\n", area1);
  printf("PIB: R$ %.2f trilhoes\n", pib1);
  printf("pontos turisticos: %d\n", pontos_turisticos1);
  printf("PIB per capita: R$ %.3f reais\n", pib_per_capita1);
  printf("Densidade populacional: %.3f habitantes por km²\n", densidade_populacional1);
  printf("super poder: %f\n", super_poderes1);
 
 
 
   //segunda carta //entrada de dados
  printf("segunda carta:\n");
   printf("nome: sao paulo.\n");  //nome da carta 
   printf("// escreva o codigo da carta porfavor,ex:B02\n");   //codigo da sua carta 
   printf("escreva o codigo da sua carta:\n");        //codigo 
   scanf(" %s", codigo2);
   printf("qual e o numero de populacoes que possui a sua carta:\n"); //numero de populaçoes
   scanf("%d", &populacao2);
   printf("digide a area da cidade:\n");  //area da cidade
   scanf("%f", &area2);
   printf("qual e o pib da sua cidade:\n"); // PIB da sua carta/cidsde
   scanf("%f", &pib2);
   printf("quantos pontos turisticos possui:\n");  //pontos turisticos
   scanf(" %d", &pontos_turisticos2);
 
   // Cálculo do PIB per capita
  pib_per_capita2 = pib2 / populacao2;
 
  // Cálculo da densidade populacional
  densidade_populacional2 = populacao2 / area2;

  //calculo do super poder
 superpoderes2= populacao2 + pib2 + area2 + pontos_turisticos2 +pib_per_capita2 + densidade_populacional2;


  //cadastro da carta //saida de dados
   printf("nome: sao paulo.");
   printf("estado:B\n");
   printf("codigo da cidade: %s\n", codigo2);
   printf("populacao da cidade: %d\n", populacao2);
   printf("area: %.2f km2\n", area2);
   printf("pib da cidade: R$ %.2f bilhoes\n", pib2);
   printf("pontos turisticos: %d\n", pontos_turisticos2);
   printf("PIB per capita: R$ %.3f reais\n", pib_per_capita2);
   printf("Densidade populacional: %.3f habitantes por km²\n", densidade_populacional2);
   printf("super poder: %f\n", superpoderes2);
 
     

   //comparações das cartas
   populacao1 > populacao2; 
   area1 > area2;
   pib1 > pib2;
   pontos_turisticos1 > pontos_turisticos2;
   pib_per_capita1 > pib_per_capita2;
   densidade_populacional1 > densidade_populacional2;
   super_poderes1 > superpoderes2;

   printf("resuldado das comparaçoes das cartas\n");
   printf("reslutado 1 sera vitoria, resultado 0 sera derrota\n");
   printf("numero 1 sera a primera carta!\n");
   printf("populaçao: %d\n",populacao1 > populacao2);
   printf("area:%d\n",area1 > area2);
   printf("pib: %d\n", pib1 > pib2);
   printf("pontos turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
   printf("pib per capito: %d\n", pib_per_capita1 > pib_per_capita2);
   printf("densidade populacional: %d\n", densidade_populacional1 > densidade_populacional2);
   printf("super pode:%d\n", super_poderes1 > superpoderes2);




  return 0;
}