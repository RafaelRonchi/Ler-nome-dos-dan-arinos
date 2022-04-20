#include <stdio.h>
#include <stdlib.h>

int main() {
  int danc = 0, x = 0, c = 0, va = 0;
  char nome[50];
  float maior = 0, menor = 100000, votos[7], media = 0;
  
  printf(" \n");
  printf("Digite o tanto de participantes: ");
  printf(" \n");
  scanf("%d", &danc);

  while (c < danc) {
    c++;
    printf(" \n");
    printf("Digite o nome o dançarino: ");
    printf(" \n");
    scanf("%s", nome);

    for (x = 0; x < 7; x++) {
      va++;
      printf(" \n");
      printf("Digite o %d ° voto\n", va);
      printf(" \n");
      scanf("%f", &votos[x]);
    }

    for (x = 0; x < 7; x++) {
      if (votos[x] > maior) {
        maior = votos[x];
      }

      if (votos[x] < menor) {
        menor = votos[x];
      }
    }

    for (x = 0; x < 7; x++) {
      media = media + votos[x];
    }

    media = ((media - menor) - maior) / 7;
    printf(" \n");
    printf("Dançarino %s\n ", nome);
    printf(" \n");
    printf("Menor nota %.2f\n", menor);
    printf("Maior nota %.2f\n", maior);
    printf("Média %.2f\n", media);
    printf(" \n");
  }
}
