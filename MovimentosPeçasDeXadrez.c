#include <stdio.h>
#include <windows.h>

int main()
{
    // Configura o terminal para aceitar acentuação
    SetConsoleOutputCP(65001);

    //===========TORRE===========

    // Move-se em linha reta horizontal ou verticalmente
    int casasTorre = 5; // número de casas que a torre pode se mover

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }
    printf("\n"); // Linha em branco para separar os movimentos

    //===========BISPO===========
    // Move-se em diagonal
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo)
    {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n"); // Linha em branco para separar os movimentos

    //===========RAINHA===========
    // Move-se em linha reta horizontal, vertical ou diagonalmente
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
