# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main ()
{
    char dnacomparacao[4], dna[30], dnainvertido[30];
    int i, n, posicao[10], cont, quantleitura, contposicao, leitura, fita, repeti;
    do
    {
    printf("===================== TESTE DNA ==========================\n\n");
    dna[4]=0;
    dna[30]=0;
    printf("DIGITE A SEQUENCIA DE DNA MINIMO 5 MAXIMO 30: \n");
    printf("DIGITE A SEQUENCIA DO DNA: ");
    scanf("%s" ,&dna);
    n = strlen(dna);
    if (dna[4] == 0)
        {
           printf("!!! ERRO VOCE DIGITOU MENOS QUE 5 !!!\n");
        }
        else if (dna[30]!=0)
            {
                printf("!!! ERRO VOCE DIGITOU MAIS DE 30 !!!\n");
            }
            else
                {
                     printf("Digite DNA de comparacao de 3 letras : ");
                     scanf("%s" ,&dnacomparacao);
// ESSE FOR ELE RODAR A QUANTIDA DE FITA QUE NO CASO SÃO SÓ DUAS 2
                     for (fita=1; fita<3; fita++)
                         {
                             cont = 0;
                             leitura = 1;
                             printf("================================ RESULTADO DA FITA %d ========================\n",fita);
// ESSE FOR E PRA RODAR A QUANTIDADE DE LEITURA QUE SERÁ FEITA
                             for (quantleitura=0; quantleitura<3; quantleitura++)
                              {
                                 printf("\n=============================== LEITURA %d =========================\n",leitura);
                                 contposicao = 1;
// ESSE FOR E RESPONSSAVEL POR FAZER A QUEBRA DO DNA EM SEQUANCIA DE TRES LETRAS
                                  for (i=quantleitura; i<n; i+=3)
                                     {
// ESSE IF ELE E RESPONSAVÉL POR FAZER A COMPÁRAÇÃO DA SEQUNENCIA DAS TRES LETRAS QUE O USUARIO DIGITOU
// COM A SEQUENCIA DO DNA QUE SERA QUEBRADO EM BLOCO DE TREZ LETRAS
                                         if (dna[i]==dnacomparacao[0]&&dna[i+1]==dnacomparacao[1]&&dna[i+2]==dnacomparacao[2])
                                             {
// ESSE cont E RESPONSAVEL POR FAZER A CONTAGEM DE QUANTOS FORAM ENCONTRADOS AS SEQUANCIA
                                                  cont = cont+1;
// ESSE P1  E RESPONSAVEL PARA GUARDA  A POSIÇÃO QUE A SEQUENCIA FOI ENCONTRADO
                                                  posicao[cont] = contposicao;
                                             }
                                        contposicao = contposicao+3;
                                     }
// ESSE PRINTF IRA IMPRIMIR A QUANTIDADE ENCOTRADAS
                                 printf(" Quantidade encontrados: %d\n ", cont);
// ESSE PRINTF IRA IMPRIMIR A POSIÇÃO ENCOTRADAS
                                 printf("Posicoes: ");
// ESSE FOR E RESPONSAVEL PARA MOSTRA A POSIÇÃO EM QUE FOI ENCONTRADA DO DNA
                                 for(i=1;i<=cont;i++)
                                     {
                                         printf("%d " ,posicao[i]);
                                     }
                                 printf("\n");
                                 cont = 0;
                                 leitura++;
                              }
                           printf("\n");
                           printf("\n");
                           contposicao = 0;
                           n = n-1;
// ESSE FOR ELE E RESPONSAVEL PARA FAZER A INVERÇÃO DA SEQUENCIA DO DNA ATRIBUINDO A SEQUENCIA
// DO ULTIMO PARA O PRIMEIRO SENDO QUE dnainvertido  E UMA VARIAVEL QUE VAI RECEBER ESSA SEQUENCIA INVERTIDA
//  A VARIAVEL dnainvertido COMEÇA COM ZER E A VARIVEL dna COMEÇA NA POSIÇÃO n-1 QUE E AONDE ESTAR A ULTIMA LETRA DA SEQUENCIA
                          for (i=n; i > -1;i-- )
                              {
                                 dnainvertido[contposicao]= dna[i];
                                 contposicao++;
                              }
// ESSE FOR E REPONSAVEL POR ATRIBUIR O VALOR PARA A VARIAVEL dna  QUE ESTAR NA VARIAVEL dnainvertido ASSIM PODENDO FAZER A LEITURA INVERTIDA
                         for (i=0; i<=n;i++ )
                             {
                                 dna[i] = dnainvertido[i];
                             }
                        }
                 }

     printf("Deseja continuar 1 para SIM e 2 para NAO : ");
     scanf("%d" ,&repeti);
     printf("\n");
     system("cls");
    }while(repeti == 1);
  return 0;
}
