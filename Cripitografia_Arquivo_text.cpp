#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main() {
    char palavra[1000], linha[1000];
    FILE *arquivo_ori;
    int opcao;

    arquivo_ori = fopen("texto.txt", "r"); // Abrir o arquivo em modo de leitura e escrita
    if (arquivo_ori == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    strcpy(palavra,""); while(fgets(linha, 1000, arquivo_ori)!= NULL){
        strcat(palavra,linha);
}

  printf("\n%s\n",palavra);
   fclose(arquivo_ori);


    do {
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
                arquivo_ori = fopen("texto.txt", "r"); // Abrir o arquivo em modo de escrita
                if (arquivo_ori == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    return 1;
                }
                fprintf(arquivo_ori, "%s", palavra); // Escrever a palavra criptografada no arquivo
                fclose(arquivo_ori);
                system("pause");
                break;
            case 2:
                system("cls");
                descriptografar(palavra);
                arquivo_ori = fopen("texto.txt", "r"); // Abrir o arquivo em modo de escrita
                if (arquivo_ori == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    return 1;
                }
                fprintf(arquivo_ori, "%s", palavra); // Escrever a palavra descriptografada no arquivo
                fclose(arquivo_ori);
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
    } while (opcao != 4);

    return 0;
}
