#include <stdio.h>

enum DiaDaSemana {
    DOMINGO,
    SEGUNDA,
    TERÇA,
    QUARTA,
    QUINTA,
    SEXTA,
    SÁBADO
};

int main () {
    enum DiaDaSemana hoje = QUARTA;
    printf("Hoje pe %d\n", hoje); //Saída: Hoje é 3
    return 0;
}

