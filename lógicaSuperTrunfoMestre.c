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
int escolha, escolha2;
float resultado, resultado2, resultado11, resultado22, soma, soma2;


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
printf ("Escolha qual o primeiro atributo será escolhido para o duelo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n"); 
printf("6. Sair\n"); 

printf(" Escolha o primeiro atributo do duelo: \n");
scanf("%d", &escolha);

switch(escolha)
{
    case 1:
    printf("Você escolheu o atributo população! \n");
    resultado = populacao > populacao2 ? printf("População da Carta %s ganhou com valor %d ", nomec, populacao) : printf("População da Carta %s ganhou com valor %d ", nomec2, populacao2);
    soma = populacao;
    soma2 = populacao2;
    printf  ("\n");
    printf("a soma parcial do jogador 1 é: %.2f \n", soma);
    printf("a soma parcial do jogador 2 é: %.2f \n", soma2);
    break;
    case 2:
    printf("Você escolheu o atributo Área! \n");
    resultado = area > area2 ? printf("Área da Carta %s ganhou com valor %d ", nomec, area) : printf("Área da Carta %s ganhou com valor %d ", nomec2, area2);
    soma = area;
    soma2 = area2;
    printf  ("\n");
    printf("a soma parcial do jogador 1 é: %.2f \n", soma);
    printf("a soma parcial do jogador 2 é: %.2f \n", soma2);
    break;
    case 3:
    printf("Você escolheu o atributo PIB! \n");
    resultado = pib > pib2 ? printf("PIB da Carta %s ganhou com valor %d ", nomec, pib) : printf("PIB da Carta %s ganhou com valor %d ", nomec2, pib2);
    soma = pib;
    soma2 = pib2;
    printf  ("\n");
    printf("a soma parcial do jogador 1 é: %.2f \n", soma);
    printf("a soma parcial do jogador 2 é: %.2f \n", soma2);
    break;
    case 4:
    printf("Você escolheu o atributo Número de pontos turísticos! \n");
    resultado = npontosturisticos > npontosturisticos2 ? printf("Número de pontos turísticos da Carta %s ganhou com valor %d ", nomec, npontosturisticos) : printf("Número de pontos turísticos da Carta %s ganhou com valor %d ", nomec2, npontosturisticos2);
    soma = npontosturisticos;
    soma2 = npontosturisticos2;
    printf  ("\n");
    printf("a soma parcial do jogador 1 é: %.2f \n", soma);
    printf("a soma parcial do jogador 2 é: %.2f \n", soma2);
    break;
    case 5:
    printf("Você escolheu o atributo Densidade demográfica! \n");
    resultado = densidade > densidade2 ? printf("Densidade demográfica da Carta %s ganhou com valor %d ", nomec, densidade) : printf("Densidade demográfica da Carta %s ganhou com valor %d ", nomec2, densidade2);;
    soma = densidade;
    soma2 = densidade2;
    printf  ("\n");
    printf("a soma parcial do jogador 1 é: %.2f \n", soma);
    printf("a soma parcial do jogador 2 é: %.2f \n", soma2);
    break;

    default:
        printf ("Opção Inválida! \n");
    break;

}

printf("\n");
printf ("Escolha qual o segundo atributo será escolhido para o duelo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n"); 
printf("6. Sair\n"); 

printf(" Escolha o segundo atributo do duelo: \n");
scanf("%d", &escolha2);


if (escolha == escolha2)
{
    printf("Você escolheu o mesmo atributo!");
} else {
switch(escolha2)
{
    case 1:
    printf("Você escolheu o atributo população! \n");
    resultado2 = populacao > populacao2 ? printf("População da Carta %s ganhou com valor %d ", nomec, populacao) : printf("População da Carta %s ganhou com valor %d ", nomec2, populacao2);
    soma = soma + populacao;
    soma2 = soma2 + populacao2;
    printf  ("\n");
    printf("a soma  do jogador 1 é: %.2f \n", soma);
    printf("a soma  do jogador 2 é: %.2f \n", soma2);
    break;
    case 2:
    printf("Você escolheu o atributo Área! \n");
    resultado2 = area > area2 ? printf("Área da Carta %s ganhou com valor %d ", nomec, area) : printf("Área da Carta %s ganhou com valor %d ", nomec2, area2);
    soma = soma + area;
    soma2 = soma2 + area2;
    printf  ("\n");
    printf("a soma  do jogador 1 é: %.2f \n", soma);
    printf("a soma  do jogador 2 é: %.2f \n", soma2);
    break;
    case 3:
    printf("Você escolheu o atributo PIB! \n");
    resultado2 = pib > pib2 ? printf("PIB da Carta %s ganhou com valor %d ", nomec, pib) : printf("PIB da Carta %s ganhou com valor %d ", nomec2, pib2);
    soma = soma + pib;
    soma2 = soma2 + pib2;
    printf  ("\n");
    printf("a soma  do jogador 1 é: %.2f \n", soma);
    printf("a soma  do jogador 2 é: %.2f \n", soma2);
    break;
    case 4:
    printf("Você escolheu o atributo Número de pontos turísticos! \n");
    resultado2 = npontosturisticos > npontosturisticos2 ? printf("Número de pontos turísticos da Carta %s ganhou com valor %d ", nomec, npontosturisticos) : printf("Número de pontos turísticos da Carta %s ganhou com valor %d ", nomec2, npontosturisticos2);
    soma = soma + npontosturisticos;
    soma2 = soma2 + npontosturisticos2;
    printf  ("\n");
    printf("a soma  do jogador 1 é: %.2f \n", soma);
    printf("a soma  do jogador 2 é: %.2f \n", soma2);
    break;
    case 5:
    printf("Você escolheu o atributo Densidade demográfica! \n");
    resultado2 = densidade > densidade2 ? printf("Densidade demográfica da Carta %s ganhou com valor %d ", nomec, densidade) : printf("Densidade demográfica da Carta %s ganhou com valor %d ", nomec2, densidade2);;
    soma = soma + densidade;
    soma2 = soma2 + densidade2;
    printf  ("\n");
    printf("a soma  do jogador 1 é: %.2f \n", soma);
    printf("a soma  do jogador 2 é: %.2f \n", soma2);
    break;

    default:
        printf ("Opção Inválida! \n");
    break;
}
}


printf("\n");
printf("A soma dos atributos escolhidos da carta %s do jogador 1 é:%.2f \n",nomec, soma);
printf("A soma dos atributos escolhidos da carta %s do jogador 2 é:%.2f \n",nomec2, soma2);


//Resultado do jogo

printf("### RESULTADO DO JOGO! ###\n");
printf("\n");
printf("Jogador 1 - carta %s  x  Jogador 2 - carta %s\n", nomec, nomec2);
printf("Soma do jogador 1 = %.2f x Soma do Jogador 2 = %.2f\n", soma, soma2);
if (soma > soma2)
{
     printf("O jogador vencedor é: JOGADOR 1 \n");
} else if (soma < soma2) {
    printf("O jogador vencedor é: JOGADOR 2 \n");
} else {
    printf("O JOGO EMPATOU!");
}




}