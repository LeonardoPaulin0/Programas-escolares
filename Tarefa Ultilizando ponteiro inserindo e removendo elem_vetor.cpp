#include <iostream>
#define MAX 10

using namespace std;

int menu(){
    int op;
	    system("cls");
	    printf("-------MENU-------\n\n");
	    printf("\n1 - Inserir um elemento");
	    printf("\n2 - Remover um elemento");
	    printf("\n3 - Imprimir o vetor");
	    printf("\n0 - Sair");
	    printf("\n\nDigite a sua opcao: ");
	    scanf("%d",&op);
	    return op;
}

void inserir (int v[], int *f, int e){

    if (*f<=MAX-2){
        *f=*f+1;
        v[*f]=e;
        printf("\n\nElemento inserido com sucesso!!\n\n");
    }
    else
        printf("\n\nImpossivel inserir.... vetor cheio!\n\n");

    system("pause");
}

void remover (int vetor[], int *f){
    if (*f>=0){
        *f=*f-1;
        printf("\n\nElemento removido com sucesso!!\n\n");
    }
    else
        printf("\n\nImpossivel remover...\nVetor vazio!!\n\n");
    system("pause");
}


void imprimir (int v[], int f){
    system("cls");
    printf("--------Imprimindo Vetor---------\n\n");
    int i;
    for(i=0;i<=f;i++)
        printf("%d\t",v[i]);
      printf("\n\n");
      system("pause");
}



int main(){
    int vetor[MAX];
    int fim=-1, elemento;  
    int op;

    do{
        op=menu();
        
        switch(op){
              case 1: system("cls");
                     printf("------Inserindo elemento no vetor--------\n\n");
                     printf("\nDigite o elemento a ser inserido: ");
                     scanf("%d",&elemento);
                     inserir(vetor,&fim,elemento);
                     break;
              case 2: remover(vetor,&fim);
                     break;
              case 3: imprimir(vetor,fim);
                    break;


      }


    }while(op!=0);

    return 0;
}

