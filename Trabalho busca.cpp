#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

void menu(){
    printf("\ MENU\n");
    printf(" 1 - GERAR VETOR\n");
    printf(" 2 - ORDENAR VETOR\n");
    printf(" 3 - BUSCA SEQUENCIAL\n");
    printf(" 4 - BUSCA BINARIA\n");
    printf(" 5 - SAIR\n");
}

int valoresAleatorios(int vetor[], int n){

        printf("\nInforme o tamanho do vetor\n");
        scanf("%d",&n);

        printf("\nAgora, informe os numeros contidos no vetor\n");
        for (int i = 0; i < n; i++){
        scanf("%d",&vetor[n]);
        }
            sort(vetor, vetor + n);
            printf("%d", vetor[n]);
            return(vetor[n]);

}

int ordenarValores(int vetor[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",vetor[n]);
    }
}

int buscaSequencial(int vetor[], int n) {
     printf("\nDigite o valor da busca\n");
     int buscar;
    scanf("%d",&buscar);
    for (int i = 0; i < n; i++) { 
        if (vetor[i] == buscar) {
        	printf("A busca existe: %d", buscar);
            return i;
        }
    }
    return -1;
}

int buscaBinaria(int vetor[], int n) { 
    int buscar;
    printf("\nDigite o valor da busca\n");
    scanf("%d",&buscar);
    int inicio = 0, fim = buscar - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (buscar == vetor[meio]) {
        	printf("A busca existe: %d", buscar);
            return meio;
        } else if (buscar > vetor[meio]) {
            inicio = meio + 1;
            printf("A busca existe: %d", buscar);
        } else if (buscar < vetor[meio]) {
            fim = meio - 1;
            printf("A busca existe: %d", buscar);
        }
    }
}

int escolha(int vetor[],int n){
int opcao;
    printf("\nEscolha um numero para prosseguir\n");
    scanf("%d", &opcao);
    opcao = tolower(opcao);
    printf("\nOpcao escolhida: %i", opcao);
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

        switch (opcao){
             case 1:
                        printf("\nGerando valores aleatorios\n");
                        valoresAleatorios(vetor,n);
                        opcao==0;
                        escolha(vetor,n);

                            break;
             default:
                printf("\n");
        }
        switch (opcao){


            case 2:
                            printf("\nOrdenando vetores\n");
                            ordenarValores(vetor, n);
                            escolha(vetor,n);
                            break;


            case 3:
                            printf("\nBusca sequencial\n");
                            buscaSequencial(vetor, n);
                            escolha(vetor,n);
                            break;


            case 4:
                            printf("\nBusca binaria\n");
                            buscaBinaria(vetor,n);
                            escolha(vetor,n);
                            break;

            case 5:
                            printf("\nSaindo do programa\n");
                            return 0;
                            break;

            default:
            system("cls");
            printf("\nVerifique sua Opção\n");
                menu();
                escolha(vetor,n);


                }

}


int main(){
    char opcao;
    int vetor[0],n=0;

    menu();
    escolha(vetor,n);

    return 0;
}