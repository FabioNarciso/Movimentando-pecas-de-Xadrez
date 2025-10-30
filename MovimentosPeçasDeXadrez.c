#include <stdio.h>
#include <windows.h>

// ==================== FUNÇÕES RECURSIVAS ====================

// Torre - movimento recursivo para a direita
void moverTorre(int casas)
{
    if (casas <= 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo - recursivo com loops aninhados (Cima + Direita)
void moverBispo(int casasVerticais, int casasHorizontais)
{
    if (casasVerticais <= 0)
        return;

    for (int i = 0; i < 1; i++)
    {
        printf("Cima\n");
        for (int j = 0; j < casasHorizontais; j++)
        {
            printf("Direita\n");
        }
    }

    moverBispo(casasVerticais - 1, casasHorizontais);
}

// Rainha - movimento recursivo para a esquerda
void moverRainha(int casas)
{
    if (casas <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main()
{
    // Configura o terminal para aceitar acentuação
    SetConsoleOutputCP(65001);

    // =========== TORRE ===========
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // =========== BISPO ===========
    int casasVerticaisBispo = 5;
    int casasHorizontaisBispo = 1;
    printf("Movimento do Bispo:\n");
    moverBispo(casasVerticaisBispo, casasHorizontaisBispo);
    printf("\n");

    // =========== RAINHA ===========
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // =========== CAVALO ===========
    // Cavalo: 2 casas para baixo e 1 casa para a esquerda
    printf("Movimento do Cavalo:\n");
    int i = 0, j = 0;
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop com múltiplas variáveis, continue e break — garante imprimir
    // exatamente: Baixo, Baixo, Esquerda
    for (; i < casasBaixo || j < casasEsquerda;)
    {
        if (i < casasBaixo)
        {
            printf("Baixo\n");
            i++;
            // enquanto ainda houver movimento vertical, continue para imprimir os "Baixo"
            if (i < casasBaixo)
                continue;
        }

        if (j < casasEsquerda)
        {
            printf("Esquerda\n");
            j++;
            // após executar o movimento lateral necessário, encerra o loop
            break;
        }
    }

    return 0;
}
