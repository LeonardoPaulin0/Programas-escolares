#include <string.h>
#include <iostream>

#define max 3

struct caderno{
    char nome[60];
    int idade;
};

typedef struct caderno Lista0;

int main(){
    Lista0 lista[max];
    int i;
    int menorIdade;
    char nomeMenorIdade[60];

    for (i = 0; i < max; i++){
        printf("\nDigite o nome da pessoa %d: ", i+1);
        fgets(lista[i].nome, sizeof(lista[i].nome), stdin);      // funcção para armazenar o nome da pessoa 

        printf("Digite a idade da %d pessoa: ", i);
        scanf("%d", &lista[i].idade);
        getchar();                            // Para consumir o caractere de nova linha pendente após scanf
    }

    menorIdade = lista[0].idade;
    strcpy(nomeMenorIdade, lista[0].nome);        
    
    for (i = 1; i < max; i++) {
        if (lista[i].idade < menorIdade) {            // verificando a menor idade 
            menorIdade = lista[i].idade; 
            strcpy(nomeMenorIdade, lista[i].nome);   // Atribuindo valor de uma variavel char para outra variavel do tipo char ultilizando 
                                                    // funcção strcpy
        }
    }

    printf("\n\nA pessoa %s eh a menor entre todos, com idade = %d\n", nomeMenorIdade, menorIdade);

    return 0;
}

