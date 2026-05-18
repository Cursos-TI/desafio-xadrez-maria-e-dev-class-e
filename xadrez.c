#include <stdio.h>

int main() {

    // movimento da torre
    // Move 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    int passosTorre = 5;
    for (int i = 0; i < passosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // movimento do bispo
    // move 5 casas na diagonal (Cima Direita) usando WHILE
    printf("Movimento do Bispo:\n");
    int passosBispo = 5;
    int contadorBispo = 0;
    while (contadorBispo < passosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");


    // movimento da rainha
    // move 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int passosRainha = 8;
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < passosRainha);
    printf("\n");


    //movimento do cavalo em L
    //move em L, 2 casas pra baixo e 1 para a esquerda usando LOOPS ANINHADOS
    printf("Movimento do Cavalo:\n");
    int quantidadeLCavalo = 1; //representa quantos L o cavalo fará

    //loop externo FOR controla a execução do L
    for (int i = 0; i < quantidadeLCavalo; i++) {

        int passoscavalobaixo = 2;

        //loop interno WHILE para a vertical
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
            passoscavalobaixo--;
        }
        //passo final do movimento para formar o L
        printf("Esquerda\n");

    }

    return 0;
}
