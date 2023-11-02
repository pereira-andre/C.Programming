#include <stdio.h>

void Hanoi(int de, int para, int medio, int discos)
{
  static char *pilhas[] = { "esquerda", "meio", "direita" };
  if (discos == 1)
    printf("\nMover disco do(a) %s para %s", pilhas[de], pilhas[para]);
  else if (discos > 1)
  {
    Hanoi(de, medio, para, discos - 1);
    Hanoi(de, para, medio, 1);
    Hanoi(medio, para, de, discos - 1);
  }
}

int main()
{
  int discos;
  printf("Torres de Hanoi. Quantos discos quer movimentar? ");
  scanf("%d", &discos);
  Hanoi(0, 2, 1, discos);
}
