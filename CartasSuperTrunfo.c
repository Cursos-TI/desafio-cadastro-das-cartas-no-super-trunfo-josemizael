#include <stdio.h>

int main() {
   float area;         // area da cidadede em km²
 float pib;          // PIB de cada cidade em milhões
 int pontos_turisticos; // numero de pontos turisticos
 char codigo[10];    // codigo da cidade,A01,A02,A03...
 int populacao;      // pupulação de cIcidade

 //estado A
 printf("//escreva o codigo da cidade, ex:A01\n");
 printf("escreva o codigo da cidade:");
 scanf("%s", &codigo);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area da cidade:");
 scanf("%f", &area);
 printf("qual e o pib da cidade:");
 scanf("%f\n", &pib);
 printf("quantos pontos turisticos possui:");
 scanf("%d\n", &pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 

 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
