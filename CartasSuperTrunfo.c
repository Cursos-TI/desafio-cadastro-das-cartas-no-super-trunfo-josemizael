#include <stdio.h>

int main() {
 float area;         // area da cidadede em km²
 float pib;          // PIB de cada cidade em milhões
 int pontos_turisticos; // numero de pontos turisticos
 char codigo[100];    // codigo da cidade,A01,A02,A03...
 int populacao;      // pupulação da cidade e estado
 char pais[20];      // nome do pais 
 char opiçao[30];
 char opiçao1[10];
 char nome[40];
 char estados[50];
 
 
  //informaçoes sobre o primeiro pais
 printf("direi as regras pra voce, seu primeiro pais sera o brasil,nele voce terar 8 estados e 4 cidades dentro de cada estado, depois de voce escolher o estado e a cidade,voce coloca as inforacoes que as perguntas estao falando.voce entendeu? diga sim ou nao.\n");
 scanf("%s", opiçao1);
  printf("sua opicao: %s\n", opiçao1);



 //seu primeiro pais
 printf("//sua primeira carta de pais sera o  Brasil, ok?,confirme pra mim com sim ou nao!!\n" );
 scanf("%s", opiçao);
 printf("sua opicao: %s\n", opiçao);


 //estado A
 printf("//escreva o nome do seu primeiro estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);
 

  //primeira cidade:
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                                // nome da cidade
 printf("nome escolhido: %s\n", nome);


 //o esdado agora vai se dividido em 4 cidades, ultilizando os numeros e letras, ex: A01.
 printf("//o esdado agora vai se dividido em 4 cidades, ultilizando os numeros e letras, ex: A01.\n");
 printf("//escreva o codigo da cidade, ex:A01\n");
 printf("escreva o codigo da cidade:");
 scanf(" %s", codigo);
 printf("digite quantas populacoes possui:\n");
 scanf("%d", &populacao );
 printf("digite a area da cidade:\n");
 scanf("%f", &area);
 printf("qual e o pib da cidade:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos possui na cidade:\n");
 scanf("%d", &pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);
  
  //cidade A02

 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                           // nome da cidade
 printf("nome escolhido: %s\n", nome);

  printf("// escreva o codigo da cidade porfavor,ex:A02\n");
  printf("escreva o codigo da cidade:\n");
  scanf(" %s", codigo);
  printf("qual e o numero de populacoes que possui a cidade:\n");
  scanf("%d", &populacao);
  printf("digide a area da cidade:\n");
  scanf("%f", &area);
  printf("qual e o pib da sua cidade:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos possui:\n");
  scanf("%d", &pontos_turisticos);
  printf("codigo da cidade: %s\n", codigo);
  printf("populacao da cidade: %d\n", populacao);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // CIDADE A03

 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                           //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("escreva o codigo da cidade, ex:A03\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacoes:\n");
 scanf("%d", &populacao);
 printf("escreva a area da cidade:\n");
 scanf("%f", &area);
 printf("escreva agora o pib da ciade:\n");
 scanf("%f", &pib);
 printf("quzntos pontos turisticos?\n");
 scanf("%d", &pontos_turisticos);
 printf("codigo da cidade: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f km²\n", area);
 printf("pib: R$ %.2f milhoes\n", pib);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // cidade A04
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                        //nome da cidade
   printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:A04.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // SEGUBDO ESTADO, USAR CODIGO AGORA: B, EX: B01.
 printf("//escreva o nome do seu segundo  estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:\n");
 scanf("%d", &populacao);
 printf("digite a area do estado:\n");
 scanf("%f", &area);
 printf("qual e o pib da estado:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos possui:\n");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);
 
 // primeira cidade do estado escolhido.
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);
  
  printf("ESCREVA O CODIGO DA CIDADE, EX:B01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

  // SEGUNDA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);
  
  
  printf("ESCREVA O CODIGO DA CIDADE, EX:B02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

  // TERCEIRA CIDADE
   printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);
  
 printf("ESCREVA O CODIGO DA CIDADE, EX:B03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // QUARTA CIDADE
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);
  
  printf("ESCREVA O CODIGO DA CIDADE, EX:B04.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //TERCEIRO ESTADO...     ESTADO C
 printf("//escreva o nome do seu terceiro estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);
 
 // primeira cidade do estado que escolheu
   printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);
  
   printf("ESCREVA O CODIGO DA CIDADE, EX:C01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);


 //SEGUNDA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

   printf("ESCREVA O CODIGO DA CIDADE, EX:C02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // TERCEIRA CIDADE
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

  printf("ESCREVA O CODIGO DA CIDADE, EX:C03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // QUARTA CIDADE
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:C04.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);
 

 //QUARTO ESTADO.... ESTADO D
 printf("//escreva o nome do seu quarto estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //primeira ciade do quarto estado
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:D01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // SEGUNDA CIDADE 
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:D02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //TERCEIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:D03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //QUARTA CIDADE 
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);
 
 printf("ESCREVA O CODIGO DA CIDADE, EX:D04.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // QUINTO ESTADO.... ESTDADO E
 printf("//escreva o nome do seu quinto estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // primeira cidade do estado: E
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:E01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);
 
 // SEGUNDA CIDADE DO ESTADO: E
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:E02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // TERCEIRA CIDADE DO ESTADO: E 
  printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:E03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //QUARTA CIDADE DO ESTADO E
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:E03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);


 // sexto estado... usar codigo da carta f01,f02
  printf("//escreva o nome do seu SEXTO estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // USAR AGORA CODIGO: F   EX: F01,F02
 //primeira cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:f01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //segubda cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:f02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // terceira cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:f03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //quarta cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:f03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);


 //setimo estado... codigo G
 printf("//escreva o nome do seu setimo estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //primera cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:G01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //segunda cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:G02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // terceira cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:G03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //quarta cidadde
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:G04.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //oitavo estado... usar o H
 printf("//escreva o nome do seu oitavo estado:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //primeira cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:H01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

  //segunda cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:H02.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);


 // terceira cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:H03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // quarta cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:H03.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);



 printf("termino do primeiro pais, agora escolha o segundo pais porfavor.\n");
 printf("escreva o nome do seu pais aqui em baixo:\n");
 scanf("%s", pais);                                          //nome do segundo pais
 printf("nome escolhido: %s\n", pais);
 printf("agora configure o pais aqui em baixo\n");

 printf("ESCREVA O CODIGO Do pais, ex:p02.\n");
 printf("escreva o codigo do pais:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da pais:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //primeiro estado
 printf("//escreva o nome do seu estado do segundo pais:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 //primeira cidade
 printf("escreva o nome da sua cidade aqui em baixo:\n");
 scanf("%s", nome);                                          //nome da cidade
 printf("nome escolhido: %s\n", nome);

 printf("ESCREVA O CODIGO DA CIDADE, EX:PA01.\n");
 printf("escreva o codigo da cidade:\n");
 scanf("%s", codigo);
 printf("escreva agora o numero de populacao:\n");
 scanf("%d", &populacao);
 printf("diga qual e a area da cidade:\n");
 scanf("%f", &area);
 printf("qual o pib:\n");
 scanf("%f", &pib);
 printf("quantos pontos turisticos?\n");
 scanf("%d",&pontos_turisticos);
 printf("codigo: %s\n", codigo);
 printf("populacao: %d\n", populacao);
 printf("area da cidade: %.2f KM²\n", area);
 printf("pib da cidade: R$ %.2f milhoes\n", pib);    
 printf("pontos turisticos: %d\n", pontos_turisticos);

  //segunda cidade
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PA02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);
 
 // terceira cidade
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PA03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);
 

 // quarta cidade 
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PA04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);
 
 // seguNdo estado do segundo pais
  printf("//escreva o nome do seu estado do segundo pais:\n");
  printf("escreva o nome do estado:\n");
  scanf(" %s", nome);
  printf("digite quantas populacoes possui:");
  scanf("%d", &populacao);
  printf("digite a area do estado:");
  scanf("%f", &area);
  printf("qual e o pib da estado:");
  scanf("%f", &pib);
  printf(" quantos pontos turisticos possui:");
  scanf("%d", &pontos_turisticos);
  printf("nome escolhido: %s\n", nome);
  printf("populacao: %d\n", populacao);
  printf("PIB: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);
 
 //PRIMERA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PB01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //SEGUNDA CIDADE
 printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PB02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // TERCEIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PB03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //quarta cidade
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PB04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // TERCEIRO estado do segundo pais
 printf("//escreva o nome do seu estado do segundo pais:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // primeira cidade 
 printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PC01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

  //SEGUNDA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PC02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // TERCEIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PC03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // QUARTA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PC04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //QUARTO ESTADO 
 printf("//escreva o nome do seu estado do segundo pais:\n");
 printf("escreva o nome do estado:\n");
 scanf(" %s", nome);
 printf("digite quantas populacoes possui:");
 scanf("%d", &populacao);
 printf("digite a area do estado:");
 scanf("%f", &area);
 printf("qual e o pib da estado:");
 scanf("%f", &pib);
 printf(" quantos pontos turisticos possui:");
 scanf("%d", &pontos_turisticos);
 printf("nome escolhido: %s\n", nome);
 printf("populacao: %d\n", populacao);
 printf("PIB: R$ %.2f milhoes\n", pib);
 printf("area: %.2f km2\n", area);
 printf("pontos turisticos: %d\n", pontos_turisticos);

 // PRIMEIRA CIDADE
 printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PD01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // SEGUNDA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PD02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //TERCEIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PD03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // QUARTA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PD04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

   //quinto estado
  printf("//escreva o nome do seu estado do segundo pais:\n");
  printf("escreva o nome do estado:\n");
  scanf(" %s", nome);
  printf("digite quantas populacoes possui:");
  scanf("%d", &populacao);
  printf("digite a area do estado:");
  scanf("%f", &area);
  printf("qual e o pib da estado:");
  scanf("%f", &pib);
  printf(" quantos pontos turisticos possui:");
  scanf("%d", &pontos_turisticos);
  printf("nome escolhido: %s\n", nome);
  printf("populacao: %d\n", populacao);
  printf("PIB: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //PRIMEIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PE01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //SEGUNDA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PE02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //TERCWIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PE03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //quarta cidade 
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PE04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //SEXTO ESTADO
  printf("//escreva o nome do seu estado do segundo pais:\n");
  printf("escreva o nome do estado:\n");
  scanf(" %s", nome);
  printf("digite quantas populacoes possui:");
  scanf("%d", &populacao);
  printf("digite a area do estado:");
  scanf("%f", &area);
  printf("qual e o pib da estado:");
  scanf("%f", &pib);
  printf(" quantos pontos turisticos possui:");
  scanf("%d", &pontos_turisticos);
  printf("nome escolhido: %s\n", nome);
  printf("populacao: %d\n", populacao);
  printf("PIB: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);

 // PRIMEIRA CIDADE
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PF01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //SEGUNDA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PF02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //TERCEIRA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PF03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //QUARTA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PF04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //SETIMO ESTADO
  printf("//escreva o nome do seu estado do segundo pais:\n");
  printf("escreva o nome do estado:\n");
  scanf(" %s", nome);
  printf("digite quantas populacoes possui:");
  scanf("%d", &populacao);
  printf("digite a area do estado:");
  scanf("%f", &area);
  printf("qual e o pib da estado:");
  scanf("%f", &pib);
  printf(" quantos pontos turisticos possui:");
  scanf("%d", &pontos_turisticos);
  printf("nome escolhido: %s\n", nome);
  printf("populacao: %d\n", populacao);
  printf("PIB: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //PRIMEIRA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PG01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //SEGUNDA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PG02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);



 //TERCEIRA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PG03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);



 //QUARTA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PG04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);

 //ULTIMO ESTADO
  printf("//escreva o nome do seu estado do segundo pais:\n");
  printf("escreva o nome do estado:\n");
  scanf(" %s", nome);
  printf("digite quantas populacoes possui:");
  scanf("%d", &populacao);
  printf("digite a area do estado:");
  scanf("%f", &area);
  printf("qual e o pib da estado:");
  scanf("%f", &pib);
  printf(" quantos pontos turisticos possui:");
  scanf("%d", &pontos_turisticos);
  printf("nome escolhido: %s\n", nome);
  printf("populacao: %d\n", populacao);
  printf("PIB: R$ %.2f milhoes\n", pib);
  printf("area: %.2f km2\n", area);
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //PRIMWIRA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PH01.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 // SEGUNDA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PH02.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //TERCEIRA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PH03.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);


 //QUARTA
  printf("escreva o nome da sua cidade aqui em baixo:\n");
  scanf("%s", nome);                                          //nome da cidade
  printf("nome escolhido: %s\n", nome);
 
  printf("ESCREVA O CODIGO DA CIDADE, EX:PH04.\n");
  printf("escreva o codigo da cidade:\n");
  scanf("%s", codigo);
  printf("escreva agora o numero de populacao:\n");
  scanf("%d", &populacao);
  printf("diga qual e a area da cidade:\n");
  scanf("%f", &area);
  printf("qual o pib:\n");
  scanf("%f", &pib);
  printf("quantos pontos turisticos?\n");
  scanf("%d",&pontos_turisticos);
  printf("codigo: %s\n", codigo);
  printf("populacao: %d\n", populacao);
  printf("area da cidade: %.2f KM²\n", area);
  printf("pib da cidade: R$ %.2f milhoes\n", pib);    
  printf("pontos turisticos: %d\n", pontos_turisticos);






 return 0;
}
