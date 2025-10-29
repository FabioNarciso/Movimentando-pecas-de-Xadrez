Desafio: Movimentando as Peças do Xadrez
Descrição

Este programa em linguagem C simula o movimento de três peças de xadrez — Torre, Bispo e Rainha — utilizando diferentes estruturas de repetição (for, while e do...while).
Cada peça realiza um movimento específico, e o programa exibe no console a direção percorrida a cada casa.

Objetivo

Aplicar o uso das estruturas de repetição em C para representar a movimentação das peças de xadrez, de acordo com as regras de movimentação de cada uma.

Estruturas utilizadas

for: usada para o movimento da Torre, pois o número de repetições é conhecido.

while: usada para o movimento do Bispo, verificando a condição antes de cada repetição.

do...while: usada para o movimento da Rainha, garantindo que o movimento ocorra pelo menos uma vez.

Lógica de movimentação

Torre: move-se 5 casas em linha reta para a direita.

Bispo: move-se 5 casas na diagonal, combinando os movimentos Cima e Direita.

Rainha: move-se 8 casas para a esquerda.

Estrutura do programa

Configuração da acentuação para o console (usando SetConsoleOutputCP(65001)).

Definição das variáveis que representam o número de casas para cada peça.

Implementação dos movimentos:

Torre: for

Bispo: while

Rainha: do...while

Impressão no console da direção de cada movimento com o comando printf.

Saída esperada
Movimento da TORRE:
Direita
Direita
Direita
Direita
Direita

Movimento do BISPO:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da RAINHA:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Requisitos atendidos

Entrada de dados: valores definidos diretamente no código.

Lógica de movimentação: cada peça segue suas regras específicas.

Saída de dados: direções exibidas corretamente no console.

Performance: execução rápida, sem atrasos.

Documentação e legibilidade: código comentado, identado e com variáveis descritivas.

Tecnologia utilizada

Linguagem: C
