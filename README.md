Movimentação das Peças de Xadrez em C
Descrição

Este programa em linguagem C simula a movimentação de quatro peças de xadrez — Torre, Bispo, Rainha e Cavalo — utilizando funções recursivas e estruturas de repetição.
O objetivo é demonstrar o uso de recursividade, loops aninhados e controle de fluxo (continue, break) para representar o comportamento das peças no tabuleiro.

Estrutura do Programa

O código está dividido em quatro partes principais, uma para cada peça:

1. Torre

Movimento: horizontal (para a direita).

Lógica: recursiva.

Função: moverTorre(int casas)

A cada chamada recursiva, imprime “Direita” até atingir o número de casas definido.

2. Bispo

Movimento: diagonal (para cima e para a direita).

Lógica: recursiva com loops aninhados.

Função: moverBispo(int casasVerticais, int casasHorizontais)

Para cada movimento vertical (“Cima”), imprime também o deslocamento horizontal (“Direita”) correspondente.

3. Rainha

Movimento: horizontal (para a esquerda).

Lógica: recursiva.

Função: moverRainha(int casas)

Imprime “Esquerda” repetidamente até completar o número de casas definido.

4. Cavalo

Movimento: em “L” (duas casas para baixo e uma para a esquerda).

Lógica: baseada em loops com múltiplas variáveis, utilizando continue e break.

O programa imprime exatamente:

Baixo
Baixo
Esquerda

Recursos Utilizados

Biblioteca <windows.h> — usada para configurar o terminal e permitir exibição correta de acentuação com SetConsoleOutputCP(65001).

Recursividade — aplicada para Torre, Bispo e Rainha.

Estruturas de repetição (for) — utilizadas no movimento do Bispo e do Cavalo.

Controle de fluxo (continue, break) — aplicado no movimento do Cavalo para definir a sequência exata de passos.

Exemplo de Saída

Ao executar o programa, o resultado será semelhante a:

Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima
Direita
Cima
Direita
Cima
Direita
Cima
Direita
Cima
Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo:
Baixo
Baixo
Esquerda

Objetivo Educacional

Este código tem fins didáticos e pode ser usado para:

Praticar recursividade em C.

Compreender estruturas de repetição e controle de fluxo.

Simular movimentos de peças de xadrez de maneira lógica e estruturada.

Desenvolvido como exercício de programação em C para prática de funções recursivas e loops.
