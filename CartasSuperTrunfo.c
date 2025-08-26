#include <stdio.h>

//Sistema de cadastro de cartas
//Teste de Jonatas Lima
//2025

//Cidade1
int main(){
  char codicodacarta[50];
  char nomedacidade[50];
  char estado[50];
  int populacao;
  float areaemkm;
  float pib;
  int numeroturisticos;

  //Cidade 2

  char codicodacarta2[50];
  char nomedacidade2[50];
  char estado2[50];
  int populacao2;
  float areaemkm2;
  float pib2;
  int numeroturisticos2;
  
//Carta 1

  //Codigo da carta
  printf("Digite um codigo para sua carta:\n");
  scanf("%s", &codicodacarta);
   
 
  //Nome da cidade
  printf("Digite nome da cidade:\n");
  scanf("%s", &nomedacidade);

  //Estado
  printf("Digite o nome do estado:\n");
  scanf("%s", &estado);

  //População
  printf("Digite numeros de habitantes?\n");
  scanf("%d", &populacao);

  //Area em KM
  printf("Digite a área em km²:\n");
  scanf("%f", &areaemkm);

  //PIB
  printf("Digite o PIB:\n");
  scanf("%f", &pib);

  //Numero De Pontos Turisticos
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &numeroturisticos);

  //Carta2

  //Codigo da carta2
  printf("Vamos criar uma nova carta, digite um novo codigo:\n");
  scanf("%s", &codicodacarta2);
   
 
  //Nome da cidade2
  printf("Digite nome da cidade:\n");
  scanf("%s", &nomedacidade2);

  //Estado2
  printf("Digite o nome do estado:\n");
  scanf("%s", &estado2);

  //População2
  printf("Digite numeros de habitantes?\n");
  scanf("%d", &populacao2);

   //AREA KM
  printf("Digite a área em km²:\n");
  scanf("%f", &areaemkm2);

  //PIB2
  printf("Digite o PIB\n");
  scanf("%f", &pib2);

  //Numero De Pontos Turisticos
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &numeroturisticos2);


//Resultados 1
  printf("O codigo da carta é:%s\n", codicodacarta);
  printf("Nome da cidade: %s\n", nomedacidade);
  printf("Estado:%s\n", estado);
  printf("A cidade tem %d de habitantes\n",populacao);
  printf("Área %.2f km²\n", areaemkm);
  printf("O pib é de: %.2f\n", pib);
  printf("E tem %d de pontos turísticos.\n", numeroturisticos);
  

  //Resultados 2
  printf("Codigo da segunda carta é:%s\n", codicodacarta2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("Estado:%s\n", estado2);
  printf("A cidade tem %d de habitantes\n",populacao2);
  printf("Área %.2f km²\n", areaemkm2);
  printf("O pib é de: %.2f\n", pib2);
  printf("E tem %d de pontos turísticos.\n", numeroturisticos2);



    return 0;
}