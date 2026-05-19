#include <stdio.h>
//com funções recursivas aplicadas

    // movimento da torre
    // A função chama a si mesma diminuindo o número de passos até chegar ao caso base (0).
    void moverTorreRecursivo(int passos) {
        if (passos <= 0) {
            return; //encerra a recursão
        }
        printf("Direita\n");
        moverTorreRecursivo(passos - 1);
    }

    // movimento do bispo
    //combina recursão com loops aninhados
    void moverBispoRecursivo(int passos) {
        if (passos <= 0) {
            return; //caso base, encerra a recursão
        }

        //loop externo para movimento vertical
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");

            //loop interno para movimento horizontal
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
        moverBispoRecursivo(passos - 1);
    }

    // movimento da rainha
    // função recursiva para o movimento da rainha
    void moverRainhaRecursivo(int passos) {
        if (passos <= 0) {
            return;
        }
        printf("Esquerda\n");
        moverRainhaRecursivo(passos - 1);
    }

    //FUNÇÃO PRINCIPAL
    int main () {
        //movimento da torre
        printf("Movimento da Torre:\n");
        int passosTorre = 5;
        moverTorreRecursivo(passosTorre);
        printf("\n");

        //movimento do bispo
        printf("Movimento do Bispo:\n");
        int passosBispo = 5;
        moverBispoRecursivo(passosBispo);
        printf("\n");

        //movimento rainha
        printf("Movimento da Rainha:\n");
        int passosRainha = 5; //mover uma peça 8 peças em linha reta é impossível no xadrez então eu coloquei 5
        moverRainhaRecursivo(passosRainha);
        printf("\n");

        //movimento do cavalo em L (loops complexos)
        printf("Movimento do Cavalo:\n");
        int passosCavalo = 1;

        //loop externo define quantas vezes o padrão L será executado
        for (int i= 0; i < passosCavalo; i++) {

            //loop interno complexo
            for (int passo = 0, concluido = 0; concluido == 0; passo++) {

                // Condição para o movimento vertical
                if (passo < 2) {
                    printf("Cima\n");
                    continue; // Pula o restante do loop e vai direto para a próxima iteração do loop interno (passo++)
                }

                // Após atingir 2 passos para cima, o código chega aqui
                printf("Direita\n");
                concluido = 1; // Altera a condição para garantir a lógica
                break;         // Encerra imediatamente o loop interno (movimento em L finalizado)
            }
        }
        printf("\n");

        return 0;
    }
