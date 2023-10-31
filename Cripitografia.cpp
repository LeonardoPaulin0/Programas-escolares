#include <iostream>
#include <stdlib.h>
#include <string.h>

void criptografar(char palavra[]);
void descriptografar(char palavra[]);

int main() {
    char palavra[100];               // para armazenar o nome
    FILE *arquivo;                   // para criar o arquivo
    int opcao;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    arquivo = fopen("arquivo.txt", "w");             // criando o arquivo
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%s", palavra);                // armazenando a palavra no arquivo.txt criado 
    fclose(arquivo);

    do{
        printf("\nMenu:\n");
        printf("1 - Criptografar\n");
        printf("2 - Descriptografar\n");
        printf("3 - Imprimir palavra\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                criptografar(palavra);
                system("pause");
                break;
            case 2:
                system("cls");
                descriptografar(palavra);
                system("pause");
                break;
            case 3:
                system("cls");
                printf("Palavra: %s\n", palavra);
                system("pause");
                break;
            case 4:
                 system("cls");
                printf("Saindo...\n");
                return 0;
            
        }
    }while(opcao!=4);

    return 0;
 }

 void criptografar(char palavra[]) {
    int i;

    for (i = 0; i < strlen(palavra); i++) {                
        palavra[i] += 3;
    }

    printf("Palavra criptografada com sucesso.\n");
 }

 void descriptografar(char palavra[]) {
    int i;

    for (i = 0; i < strlen(palavra); i++) {
        palavra[i] -= 3;
    }

    printf("Palavra descriptografada com sucesso.\n");
 }
