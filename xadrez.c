#include <stdio.h>

int main() {


    // Torre (Rook)
    // Move 5 casas para a direita usando FOR

    printf("Movimento da Torre:\n");

    int passosTorre = 5;

    for (int i = 0; i < passosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // Bispo (Bishop)
    // Move 5 casas na diagonal (Cima Direita) usando WHILE

    printf("Movimento do Bispo:\n");

    int passosBispo = 5;
    int contadorBispo = 0;

    while (contadorBispo < passosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");


    // Rainha (Queen)
    // Move 8 casas para a esquerda usando DO-WHILE
    
    printf("Movimento da Rainha:\n");

    int passosRainha = 8;
    int contadorRainha = 0;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < passosRainha);

    printf("\n");

    return 0;
}
