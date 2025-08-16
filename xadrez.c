#include <stdio.h>

int main(){

    int escolha, direcao, i, j;


    do{
        printf("Escolha qual peça deseja mover: \n");
        printf("1-Torre\n");
        printf("2-Bispo\n");
        printf("3-Rainha\n");
        printf("4-Cavalo\n");
        printf("0- Sair\n");
        scanf("%d", &escolha);

        switch (escolha){

            case 1:
                printf("Digite a direção que deseja mover a Torre:\n1-Cima\n2-Direita\n");
                scanf("%d", &direcao);
                if (direcao == 1){
                    for (i = 1; i <=5;i++){
                        printf("Cima\n");
                    }
                }
                else if(direcao==2){
                    for (i = 1; i<=5; i++){
                            printf("Direita\n");
                    }
                }
                else{
                    printf("Direção inválida");
                    }
                    break;
            case 2:
                printf("Movendo o bispo...\n");
                for (i = 1; i<=5; i++){
                    printf("Cima, direita\n");
                }
                break;
            case 3:
                printf("Movendo a rainha...\n");
                for (i = 1; i <=8; i++){
                    printf("Esquerda\n");
                }
                break;
            case 4:
                printf("Movendo o cavalo...\n");
                for (i = 1; i < 2; i++){
                    for (j = 1; j < 3; j++){
                        printf("Baixo\n");
                    }
                    printf("Esquerda\n");
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
    }
    } while(escolha != 0);
    return 0;

    }
