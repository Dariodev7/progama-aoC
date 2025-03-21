#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura da Carta
typedef struct {
    char nome[50];            // Nome da carta
    int densidade_populacional; // Densidade Populacional
    int poder_militar;        // Poder Militar
    int area;                 // Área
    int PIB;                  // PIB
    int populacao;            // População
    int super_poder;          // Super Poder (soma das propriedades)
} Carta;

// Função para calcular o super poder da carta
void calcular_super_poder(Carta *carta) {
    carta->super_poder = carta->densidade_populacional + carta->poder_militar + carta->area + carta->PIB + carta->populacao;
}

// Função para comparar as cartas
void comparar_cartas(Carta *carta1, Carta *carta2) {
    printf("\nComparação entre as cartas: %s vs %s\n", carta1->nome, carta2->nome);
    
    // Comparação de Densidade Populacional (menor vence)
    if (carta1->densidade_populacional < carta2->densidade_populacional) {
        printf("Densidade Populacional: Carta %s vence com %d\n", carta1->nome, carta1->densidade_populacional);
    } else {
        printf("Densidade Populacional: Carta %s vence com %d\n", carta2->nome, carta2->densidade_populacional);
    }

    // Comparação das outras propriedades (maior vence)
    if (carta1->poder_militar > carta2->poder_militar) {
        printf("Poder Militar: Carta %s vence com %d\n", carta1->nome, carta1->poder_militar);
    } else {
        printf("Poder Militar: Carta %s vence com %d\n", carta2->nome, carta2->poder_militar);
    }

    if (carta1->area > carta2->area) {
        printf("Área: Carta %s vence com %d\n", carta1->nome, carta1->area);
    } else {
        printf("Área: Carta %s vence com %d\n", carta2->nome, carta2->area);
    }

    if (carta1->PIB > carta2->PIB) {
        printf("PIB: Carta %s vence com %d\n", carta1->nome, carta1->PIB);
    } else {
        printf("PIB: Carta %s vence com %d\n", carta2->nome, carta2->PIB);
    }

    if (carta1->populacao > carta2->populacao) {
        printf("População: Carta %s vence com %d\n", carta1->nome, carta1->populacao);
    } else {
        printf("População: Carta %s vence com %d\n", carta2->nome, carta2->populacao);
    }

    // Comparação do Super Poder (maior vence)
    if (carta1->super_poder > carta2->super_poder) {
        printf("Super Poder: Carta %s vence com %d\n", carta1->nome, carta1->super_poder);
    } else {
        printf("Super Poder: Carta %s vence com %d\n", carta2->nome, carta2->super_poder);
    }
}

// Função para obter as entradas das cartas
void ler_carta(Carta *carta) {
    printf("\nDigite o nome da carta: ");
    scanf(" %[^\n]%*c", carta->nome);  // Permite ler o nome com espaços
    
    printf("Digite a Densidade Populacional: ");
    scanf("%d", &carta->densidade_populacional);

    printf("Digite o Poder Militar: ");
    scanf("%d", &carta->poder_militar);

    printf("Digite a Área: ");
    scanf("%d", &carta->area);

    printf("Digite o PIB: ");
    scanf("%d", &carta->PIB);

    printf("Digite a População: ");
    scanf("%d", &carta->populacao);
    
    calcular_super_poder(carta);  // Calcula o super poder da carta
}

// Função principal
int main() {
    Carta carta1, carta2;
    
    // Ler dados das duas cartas
    printf("Informe os dados da primeira carta:\n");
    ler_carta(&carta1);

    printf("\nInforme os dados da segunda carta:\n");
    ler_carta(&carta2);

    // Comparar as duas cartas
    comparar_cartas(&carta1, &carta2);
    
    return 0;
}

