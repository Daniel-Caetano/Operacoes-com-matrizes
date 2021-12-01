#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void gera_numero_aleatorio(float *numeroAleatorio) {
  *numeroAleatorio = rand() % 11;
  *numeroAleatorio = *numeroAleatorio / 10.0;
}

int main() {
  srand(time(0));

  float numeroAleatorio;
  float vetor[2];
  float matriz[2][2];
  float matrizA[2][2];
  float matrizB[2][2];
  int i = 0;
  // Gera 2 numeros aleatorios para um vetor de duas posições
  gera_numero_aleatorio(&numeroAleatorio);
  vetor[0] = numeroAleatorio;
  gera_numero_aleatorio(&numeroAleatorio);
  vetor[1] = numeroAleatorio;
  printf("\n|Vetor[1]|%.2f|\n|Vetor[2]|%.2f|", vetor[0], vetor[1]);
  // fim vetor com dados aleatorios

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      gera_numero_aleatorio(&numeroAleatorio);
      matriz[i][j] = numeroAleatorio;
    }
  }
  printf("\n Matriz \n");
  printf("----------\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("|%.2f|", matriz[i][j]);
    }
    printf("\n");
  }
  printf("----------\n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrizA[i][j] = (vetor[0]) * (matriz[i][j]);
      matrizB[i][j] = (vetor[1]) * (matriz[i][j]);
    }
  }
  printf("\n Matriz A (Matriz * vetor[1])\n");
  printf("----------\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("|%.2f|", matrizA[i][j]);
    }
    printf("\n");
  }
  printf("----------\n");

  printf("\n Matriz B (Matriz * vetor[2])\n");
  printf("----------\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("|%.2f|", matrizB[i][j]);
    }
    printf("\n");
  }
  printf("----------\n");
}