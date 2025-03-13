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
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
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
    printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
    }

somaresc1 = populacaoc1 + npontosc1;
somaresc2 = populacaoc2 + npontosc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 3:
    printf("\n\nOpção escolhida: Área da cidade   ");

if (areac1 == areac2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
    printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
    printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
        printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
    }

somaresc1 = populacaoc1 + areac1;
somaresc2 = populacaoc2 + areac2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 4:
    printf("\n\nOpção escolhida: PIB   ");

    if (PIBc1 == PIBc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBc2);
    }else if (PIBc1 > PIBc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }
    
    somaresc1 = populacaoc1 + PIBc1;
    somaresc2 = populacaoc2 + PIBc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 5:
    printf("\n\nOpção escolhida: Densidada de populacional   ");

    if (densipopuc1 == densipopuc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,densipopuc1;
        printf("\nPopulação de %s : %f",nomedacidade2,densipopuc2);
    }else if (densipopuc1 > densipopuc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade1);
            printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }
    
    somaresc1 = populacaoc1 + densipopuc1;
    somaresc2 = populacaoc2 + densipopuc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 6:
    printf("\n\nOpção escolhida: PIB per capita    ");

    if (PIBpcc1 == PIBpcc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBpcc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBpcc2);
    }else if (PIBpcc1 > PIBpcc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }
    
    somaresc1 = populacaoc1 + PIBpcc1;
    somaresc2 = populacaoc2 + PIBpcc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");

}
    
break;
//Número de pontos turísticos 
case 2:
printf("\n\nOpção escolhida: Número de pontos túristicos  ");

if (npontosc1 == npontosc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,npontosc2);
    }

    printf("\n\nEscolha o segundo atributo a ser comparado: ");
    printf("\n\n1...Para População ");
    printf("\n2...X Atributo já escolhido ");
    printf("\n3...Para a Área da cidade ");
    printf("\n4...Para o PIB ");
    printf("\n5...Para a Densidade populacional ");
    printf("\n6...Para o PIB per capita ");
    printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
    printf("\n\nOpção:  ");
    scanf("%d", &opcaodojogador);

switch (opcaodojogador)
{
case 1:
printf("\n\nOpção escolhida: População  ");

if (populacaoc1 == populacaoc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
}else if (populacaoc1 > populacaoc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }

somaresc1 = npontosc1 + populacaoc1;
somaresc2 =  npontosc2 + populacaoc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 3:
    printf("\n\nOpção escolhida: Área da cidade   ");

if (areac1 == areac2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
    printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
    printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
        printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
    }

somaresc1 =npontosc1 + areac1;
somaresc2 = npontosc2 + areac2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 4:
    printf("\n\nOpção escolhida: PIB   ");

    if (PIBc1 == PIBc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBc2);
    }else if (PIBc1 > PIBc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }
    
    somaresc1 = npontosc1 + PIBc1;
    somaresc2 = npontosc2 + PIBc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 5:
    printf("\n\nOpção escolhida: Densidada de populacional   ");

    if (densipopuc1 == densipopuc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,densipopuc1;
        printf("\nPopulação de %s : %f",nomedacidade2,densipopuc2);
    }else if (densipopuc1 > densipopuc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade1);
            printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }
    
    somaresc1 = npontosc1 + densipopuc1;
    somaresc2 = npontosc2 + densipopuc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 6:
    printf("\n\nOpção escolhida: PIB per capita    ");

    if (PIBpcc1 == PIBpcc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBpcc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBpcc2);
    }else if (PIBpcc1 > PIBpcc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }
    
    somaresc1 = npontosc1 + PIBpcc1;
    somaresc2 = npontosc2 + PIBpcc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");

}
    
break;
//Área da cidade 
case 3: 
printf("\n\nOpção escolhida: Área da cidade  ");

if (areac1 == areac2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
    printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
}else if (areac1 > areac2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
    printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
        printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
    }

    printf("\n\nEscolha o segundo atributo a ser comparado: ");
    printf("\n\n1...Para População ");
    printf("\n2...Número de pontos turísticos");
    printf("\n3...X Atributo já escolhido ");
    printf("\n4...Para o PIB ");
    printf("\n5...Para a Densidade populacional ");
    printf("\n6...Para o PIB per capita ");
    printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
    printf("\n\nOpção:  ");
    scanf("%d", &opcaodojogador);

switch (opcaodojogador)
{
case 1:
printf("\n\nOpção escolhida: População  ");

if (populacaoc1 == populacaoc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
}else if (populacaoc1 > populacaoc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }

somaresc1 = areac1 + populacaoc1;
somaresc2 =  areac2 + populacaoc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 2:
    printf("\n\nOpção escolhida: Número de pontos turísticos  ");

if (npontosc1 == npontosc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }

somaresc1 = areac1 + npontosc1;
somaresc2 = areac2 + npontosc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 4:
    printf("\n\nOpção escolhida: PIB   ");

    if (PIBc1 == PIBc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBc2);
    }else if (PIBc1 > PIBc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }
    
    somaresc1 = areac1 + PIBc1;
    somaresc2 = areac2 + PIBc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 5:
    printf("\n\nOpção escolhida: Densidada de populacional   ");

    if (densipopuc1 == densipopuc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,densipopuc1;
        printf("\nPopulação de %s : %f",nomedacidade2,densipopuc2);
    }else if (densipopuc1 > densipopuc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade1);
            printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }
    
    somaresc1 = areac1 + densipopuc1;
    somaresc2 = areac2 + densipopuc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 6:
    printf("\n\nOpção escolhida: PIB per capita    ");

    if (PIBpcc1 == PIBpcc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBpcc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBpcc2);
    }else if (PIBpcc1 > PIBpcc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }
    
    somaresc1 = areac1 + PIBpcc1;
    somaresc2 = areac2 + PIBpcc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");

}
  
break;
//PIB
case 4: 
printf("\n\nOpção escolhida: PIB  ");

if (PIBc1 == PIBc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
}else if (PIBc1 > PIBc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
    printf("\nPopulação de %s : %f",nomedacidade2,PIBc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
    }

    printf("\n\nEscolha o segundo atributo a ser comparado: ");
    printf("\n\n1...Para População ");
    printf("\n2...Número de pontos turísticos");
    printf("\n3...Para a Área da cidade ");
    printf("\n4...X Atributo já escolhido");
    printf("\n5...Para a Densidade populacional ");
    printf("\n6...Para o PIB per capita ");
    printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
    printf("\n\nOpção:  ");
    scanf("%d", &opcaodojogador);

switch (opcaodojogador)
{
case 1:
printf("\n\nOpção escolhida: População  ");

if (populacaoc1 == populacaoc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
}else if (populacaoc1 > populacaoc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }

somaresc1 = PIBc1 + populacaoc1;
somaresc2 =  PIBc2 + populacaoc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 2:
    printf("\n\nOpção escolhida: Número de pontos turísticos  ");

if (npontosc1 == npontosc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }

somaresc1 = PIBc1 + npontosc1;
somaresc2 = PIBc2 + npontosc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 3:
    printf("\n\nOpção escolhida: Área da cidade   ");

    if (areac1 == areac2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,areac1;
        printf("\nPopulação de %s : %f",nomedacidade2,areac2);
    }else if (areac1 > areac2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
        printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
            printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
        }
    
    somaresc1 = PIBc1 + areac1;
    somaresc2 = PIBc2 + areac2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 5:
    printf("\n\nOpção escolhida: Densidada de populacional   ");

    if (densipopuc1 == densipopuc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,densipopuc1;
        printf("\nPopulação de %s : %f",nomedacidade2,densipopuc2);
    }else if (densipopuc1 > densipopuc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade1);
            printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }
    
    somaresc1 = PIBc1 + densipopuc1;
    somaresc2 = PIBc2 + densipopuc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 6:
    printf("\n\nOpção escolhida: PIB per capita    ");

    if (PIBpcc1 == PIBpcc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBpcc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBpcc2);
    }else if (PIBpcc1 > PIBpcc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }
    
    somaresc1 = PIBc1 + PIBpcc1;
    somaresc2 = PIBc2 + PIBpcc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");

}

break;
//Densidade populacional
case 5: 
printf("\n\nOpção escolhida: Densidade Populacional  ");

if (densipopuc1 == densipopuc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
}else if (densipopuc1 > densipopuc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade2);
    printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
    printf("\nPopulação de %s : %f",nomedacidade2,densipopuc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
    }

    printf("\n\nEscolha o segundo atributo a ser comparado: ");
    printf("\n\n1...Para População ");
    printf("\n2...Número de pontos turísticos");
    printf("\n3...Para a Área da cidade ");
    printf("\n4...Para PIB");
    printf("\n5...X Atributo já escolhido ");
    printf("\n6...Para o PIB per capita ");
    printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
    printf("\n\nOpção:  ");
    scanf("%d", &opcaodojogador);

switch (opcaodojogador)
{
case 1:
printf("\n\nOpção escolhida: População  ");

if (populacaoc1 == populacaoc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
}else if (populacaoc1 > populacaoc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }

somaresc1 = densipopuc1 + populacaoc1;
somaresc2 =  densipopuc2 + populacaoc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 2:
    printf("\n\nOpção escolhida: Número de pontos turísticos  ");

if (npontosc1 == npontosc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }

somaresc1 = densipopuc1 + npontosc1;
somaresc2 = densipopuc2 + npontosc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 3:
    printf("\n\nOpção escolhida: Área da cidade   ");

    if (areac1 == areac2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,areac1;
        printf("\nPopulação de %s : %f",nomedacidade2,areac2);
    }else if (areac1 > areac2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
        printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
            printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
        }
    
    somaresc1 = densipopuc1 + areac1;
    somaresc2 = densipopuc2 + areac2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 4:
    printf("\n\nOpção escolhida: PIB   ");

    if (PIBc1 == PIBc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBc2);
    }else if (PIBc1 > PIBc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }
    
    somaresc1 = densipopuc1 + PIBc1;
    somaresc2 = densipopuc2 + PIBc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 6:
    printf("\n\nOpção escolhida: PIB per capita    ");

    if (PIBpcc1 == PIBpcc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBpcc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBpcc2);
    }else if (PIBpcc1 > PIBpcc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
        }
    
    somaresc1 = densipopuc1 + PIBpcc1;
    somaresc2 = densipopuc2 + PIBpcc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");

}

break;
//PIB per capita
case 6: 
printf("\n\nOpção escolhida: PIB per capita  ");

if (PIBpcc1 == PIBpcc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
}else if (PIBpcc1 > PIBpcc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
    printf("\nPopulação de %s : %f",nomedacidade2,PIBpcc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBpcc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBpcc2);
    }

    printf("\n\nEscolha o segundo atributo a ser comparado: ");
    printf("\n\n1...Para População ");
    printf("\n2...Número de pontos turísticos");
    printf("\n3...Para a Área da cidade ");
    printf("\n4...Para PIB");
    printf("\n5...Densidade populacional");
    printf("\n6...X Atributo já escolhido ");
    printf("\n\n!!!Aviso: Em caso de opção invalida, O sistema exibirá uma mensagem de erro!!!");
    printf("\n\nOpção:  ");
    scanf("%d", &opcaodojogador);

switch (opcaodojogador)
{
case 1:
printf("\n\nOpção escolhida: População  ");

if (populacaoc1 == populacaoc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
}else if (populacaoc1 > populacaoc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
    printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %d ",nomedacidade1,populacaoc1);
        printf("\nPopulação de %s : %d ",nomedacidade2,populacaoc2);
    }

somaresc1 = PIBpcc1 + populacaoc1;
somaresc2 =  PIBpcc2 + populacaoc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 2:
    printf("\n\nOpção escolhida: Número de pontos turísticos  ");

if (npontosc1 == npontosc2)
{
    printf("\n\nEmpate entre cidades!!!");
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
}else if (npontosc1 > npontosc2)
{
    printf("\n\n%s Venceu!!!",nomedacidade1);
    printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
    printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }else {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,npontosc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,npontosc2);
    }

somaresc1 = PIBpcc1 + npontosc1;
somaresc2 = PIBpcc2 + npontosc2;

    // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

//resultdo/vencedor da rodada 

somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 3:
    printf("\n\nOpção escolhida: Área da cidade   ");

    if (areac1 == areac2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,areac1;
        printf("\nPopulação de %s : %f",nomedacidade2,areac2);
    }else if (areac1 > areac2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
        printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,areac1);
            printf("\nPopulação de %s : %f ",nomedacidade2,areac2);
        }
    
    somaresc1 = PIBpcc1 + areac1;
    somaresc2 = PIBpcc2 + areac2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 4:
    printf("\n\nOpção escolhida: PIB   ");

    if (PIBc1 == PIBc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,PIBc1;
        printf("\nPopulação de %s : %f",nomedacidade2,PIBc2);
    }else if (PIBc1 > PIBc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade1);
        printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade2);
            printf("\nPopulação de %s : %f ",nomedacidade1,PIBc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,PIBc2);
        }
    
    somaresc1 = PIBpcc1 + PIBc1;
    somaresc2 = PIBpcc2 + PIBc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;
    case 5:
    printf("\n\nOpção escolhida: Densidade populacional    ");

    if (densipopuc1 == densipopuc2)
    {
        printf("\n\nEmpate entre cidades!!!");
        printf("\nPopulação de %s : %f"),nomedacidade1,densipopuc1;
        printf("\nPopulação de %s : %f",nomedacidade2,densipopuc2);
    }else if (densipopuc1 > densipopuc2)
    {
        printf("\n\n%s Venceu!!!",nomedacidade2);
        printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
        printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }else {
            printf("\n\n%s Venceu!!!",nomedacidade1);
            printf("\nPopulação de %s : %f ",nomedacidade1,densipopuc1);
            printf("\nPopulação de %s : %f ",nomedacidade2,densipopuc2);
        }
    
    somaresc1 = PIBpcc1 + densipopuc1;
    somaresc2 = PIBpcc2 + densipopuc2;
    
        // condicao ? t : f ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    //resultdo/vencedor da rodada 
    
    somaresc1 == somaresc2 ? printf("\n\nEmpate na rodada!!!\nSem vencedor!!!") :printf("");
    somaresc1 > somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade1) :printf("");
    somaresc1 < somaresc2 ? printf("\n\n%s Venceu!!!",nomedacidade2) :printf("");


    break;

default:
printf("\n\n\n\n!!!Entrada invalida!!!");

}

break;
default:

printf("\n\n\n\n!!!Entrada invalida!!!");

    
}


printf("\n\nObrigado por jogar ;)");


printf("\n\n\nFinalizando programa...\n\n\n");




    return 0;
}
