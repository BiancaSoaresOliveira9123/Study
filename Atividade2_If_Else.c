#include <stdio.h>

int main() {
  float temperatura, umidade;
  unsigned int estoque, estoqueMinimo = 1000;

  printf("Digite a temperatura: \n");
  scanf("%f", &temperatura);
  printf("Digite a umidade: \n");
  scanf("%f", &umidade);
  printf("Digite o estoque: \n");
  scanf("%u", &estoque);

    if (temperatura > 30.0) {
        printf("Temperatura está alta\n");
    } else {
        printf("Temperatura está normal\n");
    }
    if (umidade > 50.0) {
        printf("Umidade está alta\n");
    } else {
        printf("Umidade está normal\n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque baixo\n");
    } else {
        printf("Estoque adequado\n");
    }
  return 0;

}