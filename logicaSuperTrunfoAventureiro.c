#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
//declaração das variáveis
char estado[2]; //variável do estado
char estado2[2]; //variável do estado
int ncarta;
int ncarta2;
char codigo[5]; // variável do código
char codigo2[5]; // variável do código
char nomec[50]; //variável do nome da cidade
char nomec2[50]; //variável do nome da cidade
unsigned long int populacao; // variável da população
unsigned long int populacao2; // variável da população
float area; // variável da área
float area2; // variável da área
float pib; //variável do PIB
float pib2; //variável do PIB
int npontosturisticos; //variavel número de pontos turísticos
int npontosturisticos2; //variavel número de pontos turísticos
float densidade;
float densidade2;
float PPC;
float PPC2;
float SP;
float SP2;
int escolha;


//Entrada de dados
//CARTA 1
printf("CARTA 1: \n \n");
printf("Qual estado pertence a carta (coloque de A a H) ? ");
scanf("%s", estado);
printf("Qual o número da carta? ");
scanf("%d", &ncarta);
printf("Qual o nome da cidade? ");
scanf("%s", nomec);

printf("Qual a quantidade de pessoas possui esta cidade? ");
scanf("%d", &populacao);
printf("Qual a área territorial desta cidade? ");
scanf("%f", &area);
printf("Qual o pib dessa cidade? ");
scanf("%f", &pib);
printf("Quantos pontos turísticos possui a cidade desta carta? ");
scanf("%d", &npontosturisticos);
printf("\n");
printf("\n");

//CARTA 2

printf("CARTA 2: ");
printf("\n");

printf("Qual estado pertence a carta 2 (coloque de A a H) ? ");
scanf("%s", estado2);
printf("Qual o número da carta 2? ");
scanf("%d", &ncarta2);
printf("Qual o nome da cidade 2? ");
scanf("%s", nomec2);
printf("Qual a quantidade de pessoas possui esta cidade? ");
scanf("%d", &populacao2);
printf("Qual a área territorial desta cidade? ");
scanf("%f", &area2);

printf("Qual PIB dessa cidade? ");
scanf("%f", &pib2);
printf("Quantos pontos turísticos possui a cidade desta carta? ");
scanf("%d", &npontosturisticos2);

//Saída de dados
//CARTA 1
printf("\n"); //comando para pular linha
printf("Cartas Super Trunfo");
printf("\n");
printf("Carta 1:");
printf("Estado: %s\n", estado); 
printf("O código da carta 1 é: %s%d\n", estado, ncarta); //vai demonstrar o código da carta
printf("Nome da cidade: %s\n", nomec);

printf("População: %d\n", populacao); //demonstrar qual é o número de pessoas da cidade
printf("Área: %.2f km²\n", area); // demonstrar qual é a área da cidade
printf("PIB: %.2f Bilhões de reais\n", pib); // demonstrar qual o pib da cidade
printf("Números de Pontos turísticos: %d\n", npontosturisticos); // demonstrar quantos pontos turísticos possui a cidadeA
densidade = (populacao/area); //calculo da densidade
printf("Densidade Populacional: %.2f hab/km²\n", densidade); //demonstrar densidade
PPC = (pib/populacao); //calculo do Pib per capita
printf("PIB per Capita: %.2f reais\n", PPC); //demonstrar o Pib per capita
SP = populacao+area+pib+npontosturisticos+PPC+(1/densidade); // Calculo do super poder
printf("Super poder: %.2f\n", SP); // demonstrar o valor do super poder

printf("\n");

printf("\n"); //comando para pular linha

//CARTA 2
printf("\n");
printf("Carta 2:");
printf("\n");
printf("Estado: %s\n", estado2); 
printf("O código da carta 2 é: %s%d\n", estado2, ncarta2); //vai demonstrar o código da carta
printf("Nome da cidade: %s\n", nomec2);

printf("População: %d\n", populacao2); //demonstrar qual é o número de pessoas da cidade
printf("Área: %.2f km²\n", area2); // demonstrar qual é a área da cidade
printf("PIB: %.2f Bilhões de reais\n", pib2); // demonstrar qual o pib da cidade
printf("Números de Pontos turísticos: %d\n", npontosturisticos2); // demonstrar quantos pontos turísticos possui a cidadeA
densidade2 = (populacao2/area2); //calculo da densidade
printf("Densidade Populacional: %.2f hab/km²\n", densidade2); //demonstrar densidade
PPC2 = (pib2/populacao2); //calculo do Pib per capita
printf("PIB per Capita: %.2f reais\n", PPC2); //demonstrar o Pib per capita
SP2 = populacao2+area2+pib2+npontosturisticos2+PPC2+(1/densidade2); // Calculo do super poder
printf("Super poder: %.2f\n", SP2); // demonstrar o valor do super poder

// Comparação e resultados

    printf("\nComparação de Cartas:\n");

    
printf ("***Hora do duelo***\n");
printf("\n");
printf ("Escolha qual atributo será escolhido para o duelo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n"); 
printf("6. Sair\n"); 
printf("\n");
printf(" Escolha: \n");
scanf("%d", &escolha);
printf("\n");

switch (escolha)
{

    case 1:
    printf("População: \n");
    printf(" Jogador 1 escolheu a carta %s", nomec);
    printf(" que possui atributo de polução: %d \n", populacao);
    printf(" Jogador 2 escolheu a carta %s", nomec2);
    printf(" que possui atributo de polução: %d\n", populacao2);
    if (populacao > populacao2) {
        printf(" O jogador 1 venceu com a carta: %s\n", nomec);
    } else if (populacao < populacao2) {
        printf(" O jogador 2 venceu com a carta: %s\n", nomec2);
    } else {
        printf("### O JOGO EMPATOU! ###\n");
    }
    break;

case 2:
    printf("Área: \n");
    printf(" Jogador 1 escolheu a carta %s", nomec);
    printf(" que possui atributo de área: %f\n", area);
    printf(" Jogador 2 escolheu a carta %s", nomec2);
    printf(" que possui atributo de área: %f\n", area2);
    if (area > area2) {
        printf(" O jogador 1 venceu com a carta: %s\n", nomec);
    } else if (area < area2) {
        printf(" O jogador 2 venceu com a carta: %s\n", nomec2);
    } else {
        printf("### O JOGO EMPATOU! ###\n");
    }
    break;
    
    case 3:
    printf("PIB: \n");
    printf(" Jogador 1 escolheu a carta %s", nomec);
    printf(" que possui atributo de PIB: %f\n", pib);
    printf(" Jogador 2 escolheu a carta %s", nomec2);
    printf(" que possui atributo de PIB: %f\n", pib2);
    if (pib > pib2) {
        printf(" O jogador 1 venceu com a carta: %s\n", nomec);
    } else if (pib < pib2) {
        printf(" O jogador 2 venceu com a carta: %s\n", nomec2);
    } else {
        printf("### O JOGO EMPATOU! ###\n");
    }
    break;

    case 4:
    printf("Número de pontos turísticos: \n");
    printf(" Jogador 1 escolheu a carta %s", nomec);
    printf(" que possui atributo de Número de pontos turísticos: %d\n", npontosturisticos);
    printf(" Jogador 2 escolheu a carta %s", nomec2);
    printf(" que possui atributo de Número de pontos turísticos: %d\n", npontosturisticos2);
    if (npontosturisticos > npontosturisticos2) {
        printf(" O jogador 1 venceu com a carta: %s\n", nomec);
    } else if (npontosturisticos < npontosturisticos2) {
        printf(" O jogador 2 venceu com a carta: %s\n", nomec2);
    } else {
        printf("### O JOGO EMPATOU! ###\n");
    }
    break;

    case 5:
    printf("Densidade demográfica: \n");
    printf(" Jogador 1 escolheu a carta %s", nomec);
    printf(" que possui atributo de Densidade demográfica: %f\n", densidade);
    printf(" Jogador 2 escolheu a carta %s", nomec2);
    printf(" que possui atributo de Densidade demográfica: %f\n", densidade2);
    if (densidade < densidade2) {
        printf(" O jogador 1 venceu com a carta: %s\n", nomec);
    } else if (densidade > densidade2) {
        printf(" O jogador 2 venceu com a carta: %s\n", nomec2);
    } else {
        printf("### O JOGO EMPATOU! ###\n");
    }
    break;

    case 6:
    printf("Opção Inválida: \n");
    break;

}
}

