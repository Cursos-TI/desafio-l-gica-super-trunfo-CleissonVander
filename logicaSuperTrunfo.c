#include <stdio.h>

struct Carta {
    char nome[50];
    int populacao;
    float area;
    int forcaMilitar;
    float pib; // PIB em bilhões de dólares
};

int main() {
    struct Carta pais1 = {"Brasil", 213000000, 8515767.0, 70, 1847.0};
    struct Carta pais2 = {"Estados Unidos", 331000000, 9833517.0, 85, 22939.0};

    float pibPerCapita1 = pais1.pib * 1000000000 / pais1.populacao;
    float densidade1 = pais1.populacao / pais1.area;

    float pibPerCapita2 = pais2.pib * 1000000000 / pais2.populacao;
    float densidade2 = pais2.populacao / pais2.area;

    printf("Comparando Força Militar:\n");
    if (pais1.forcaMilitar > pais2.forcaMilitar) {
        printf("%s vence em força militar.\n\n", pais1.nome);
    } else if (pais2.forcaMilitar > pais1.forcaMilitar) {
        printf("%s vence em força militar.\n\n", pais2.nome);
    } else {
        printf("Empate em força militar.\n\n");
    }

    printf("Comparando PIB per capita:\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("%s vence em PIB per capita.\n\n", pais1.nome);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("%s vence em PIB per capita.\n\n", pais2.nome);
    } else {
        printf("Empate em PIB per capita.\n\n");
    }

    printf("Comparando Densidade Populacional:\n");
    if (densidade1 > densidade2) {
        printf("%s tem maior densidade populacional.\n", pais1.nome);
    } else if (densidade2 > densidade1) {
        printf("%s tem maior densidade populacional.\n", pais2.nome);
    } else {
        printf("Empate em densidade populacional.\n");
    }

    return 0;

}
