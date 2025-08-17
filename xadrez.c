#include <stdio.h>

    void movimentoTorre(int casas){
        if (casas > 0){
            printf("Direita\n");
            movimentoTorre(casas -1);
        }
    }

    void movimentoBispo(int casas){
        if (casas > 0){
            printf("Cima, direita\n");
            movimentoBispo(casas - 1);
        }
    }
    void movimentoRainha(int casas){
        if (casas > 0){
            printf("Esquerda\n");
            movimentoRainha(casas - 1);
        }
    }


    int main(){

        int escolha;

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
                    printf("Movendo a torre...\n");
                    movimentoTorre(5);
                    break;
                case 2:
                    printf("Movendo o bispo...\n");
                    movimentoBispo(5);
                    break;
                case 3:
                    printf("Movendo a rainha...\n");
                    movimentoRainha(8);
                    break;
                case 4:
                    printf("Movendo o cavalo...\n");
                    for (int i = 0, j = 2; i < 1,  j > 1; i++, j--){
                        printf("Cima, cima, direita\n");
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
