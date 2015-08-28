#include<stdio.h>

int a, b, c;
main()
{
      printf("Ingresa los lados de un triangulo.\n\n");
      printf("Lado a: ");
      scanf("%i", &a);
      printf("Lado b: ");
      scanf("%i", &b);
      printf("Lado c: ");
      scanf("%i", &c);
      if((a==b) && (a==c) && (b==c))
      {
          printf("El triangulo es Esquilatero\n");
      }
      else
      {
          if((a==b) || (b==a) || (c==a))
          {
              printf("El triangulo es Isoceles\n");
          }
          else
          {
              printf("Es triangulo es escaleno\n");
          }
      }
      system("pause");
      return 0;
}
