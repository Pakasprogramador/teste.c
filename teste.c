#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
//variavel de escolha
int opcaodojogador,opcaodocomputador;
srand (time(0));

//carta 1
char nomedacidade1[50] = "num";
char codigodacartac1[50] = "num";
int populacaoc1 = 0;
int npontosc1 = 0;
float areac1 = 0;
float PIBc1 = 0;
float densipopuc1 = 0;
float PIBpcc1 = 0;
float somaresc1 = 0.00;

//carta 2
char nomedacidade2[50] = "num";
char codigodacartac2[50] = "num";
int populacaoc2 = 0;
int npontosc2 = 0;
float areac2 = 0;
float PIBc2 = 0;
float densipopuc2 = 0;
float PIBpcc2 = 0;
float somaresc2 = 0.00;

//apresentacao e entrada e saida de dados
printf("~~~~Bem vindo ao jogo de super trunfo~~~~");
printf("\n\n***Opções***");
printf("\n\n1...Para continuar\n2...Para ver as regras ");
printf("\nOpção: ");
scanf("%d",&opcaodojogador);

switch (opcaodojogador)
{
case 1:
   
printf("\nContinuando programa...\n\n ");

break;

case 2:
printf("\n-1...O sistema lhe pedirá os atributos de cada carta\n ");  
printf("\n-2...Após informá-los o jogador poderá escolher dois atributos para serem comparados\n");
printf("\n-3...O sistema informará a carta vencedora com base em qual cartatem o maior valor na soma dos dois atributos(com exceção ao atributo de densidade populacional,o qual é o inverso) \n");
printf("\n-4...O sistema dirá a carta vencedora da comparação e da rodada\n ");

    break;
default:

printf("\n\n!!!Opção inválida!!!\n");
printf("\nContinuando programa...\n\n ");

}

//entrada e saida de dados
//cidade 1

printf("\n\n//////////////////////////////Cidade 1////////////////////////////// ");

printf("\n\nDigite o nome da primeira cidade: ");
scanf("%s", &nomedacidade1);

printf("\n\nDigite o código da carta:  ");
scanf("%s", &codigodacartac1);

printf("\n\nDigite a população da cidade:  ");
scanf("%d", &populacaoc1);

printf("\n\nDigite o número de pontos turísticos da cidade:  ");
scanf("%d", &npontosc1);

printf("\n\nDigite a área da cidade(em km²):  ");
scanf("%f", &areac1);

printf("\n\nDigite o PIB da cidade:  ");
scanf("%f", &PIBc1);

//cidade 2

printf("\n\n//////////////////////////////Cidade 2////////////////////////////// ");

printf("\n\nDigite o nome da primeira cidade: ");
scanf("%s", &nomedacidade2);

printf("\n\nDigite o código da carta:  ");
scanf("%s", &codigodacartac2);

printf("\n\nDigite a população da cidade:  ");
scanf("%d", &populacaoc2);

printf("\n\nDigite o número de pontos turísticos da cidade:  ");
scanf("%d", &npontosc2);

printf("\n\nDigite a área da cidade(em km²):  ");
scanf("%f", &areac2);

printf("\n\nDigite o PIB da cidade:  ");
scanf("%f", &PIBc2);

printf("\n\n###Cálculos feitos! ;)  \n\nDigite qualquer valor para continuar:  ");
scanf("%d",&opcaodojogador);

switch (opcaodojogador)
{
case 1:
   
printf("\nContinuando programa...\n\n ");

break;
default:

printf("\nContinuando programa...\n\n ");

}

//cálculos de PIB per capita e densidade populacional

//cidade 1
densipopuc1 = populacaoc1 / areac1;
PIBpcc1 = PIBc1 / populacaoc1;

//cidade 2
densipopuc2 = populacaoc2 / areac2;
PIBpcc2 = PIBc2 / populacaoc2;

//escolha de atributos para comparação 

printf("\n\nEscolha o primeiro atributo a ser comparado: ");
printf("\n\n1...Para a População ");
printf("\n2...Para o Número de pontos turísticos ");
printf("\n3...Para a Área da cidade ");
printf("\n4...Para o PIB ");
printf("\n5...Para a Densidade populacional ");
printf("\n6...Para o PIB per capita ");
printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
printf("\n\nOpção:  ");
scanf("%d", &opcaodojogador);


//sistema de decisão
switch (opcaodojogador)
{
//população    
case 1:
printf("\n\nOpção escolhida: População  ");

if (populacaoc1 == populacaoc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
}else if (populacaoc1 > populacaoc2)
{
    printf("\n\n%s!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }

    printf("\n\nEscolha o segundo atributo a ser comparado: ");
    printf("\n\n1...X Atributo já escolhido ");
    printf("\n2...Para o Número de pontos turísticos ");
    printf("\n3...Para a Área da cidade ");
    printf("\n4...Para o PIB ");
    printf("\n5...Para a Densidade populacional ");
    printf("\n6...Para o PIB per capita ");
    printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
    printf("\n\nOpção:  ");
    scanf("%d", &opcaodojogador);

switch (opcaodojogador)
{
case 2:
printf("\n\nOpção escolhida: Número de pontos turísticos  ");

if (npontosc1 == npontosc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,nomedacidade2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
    }

somaresc1 = populacaoc1 + npontosc1;
somaresc2 = populacaoc2 + npontosc2;

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 


    break;
    case 3:
    
    break;
    case 4:
    
    break;
    case 5:
    
    break;
    case 6:
    
    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");
printf("\nFinalizando programa...");
}
    
break;
case 2:

break;
default:

printf("\n\n\n\n!!!Entrada invalida!!!");
printf("\nFinalizando programa...");
    
}





printf("\nFinalizando programa...");




    return 0;
}
