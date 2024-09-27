#include <stdio.h>
#include <math.h>

int resp;

int suma (int a, int b)
{
  resp = a + b;
  return(resp);
}

int resta (int a, int b)
{
  resp = a - b;
  return (resp);
}
int multuipliacion (int a, int b)
{
  resp = a * b;
  return (resp);
}
int division (int a, int b)
{
  resp = a / b;
  return (resp);
}

int exponencial (int a, int b)
{
  resp = pow(a,b);
  return (resp);
}

int main ()
{
/*Primero inicializamos nuestras variables como enteros*/
    int a = 0, b = 0, operation  = 0;
    int option;

    printf ("¿Qué operación quieres realizar?: \n");
    printf ( "1 - suma\n");
    printf ( "2 - resta\n");
    printf ( "3 - multiplicación\n");
    printf ( "4 - división\n");
    printf ( "5 - exponencial\n");
    scanf ("%d%" , &option);

   do
  {
    printf ("Dame los números:\n");
    printf ("número 1: ");
    scanf ("%d%", &a);
    printf ("nuemero 2: ");
    scanf ("%d", &b);

      switch (option)
    {
      default:
        respuesta = 9;
        break;
      case 1:
        respuesta = suma(a,b);
        break;
      case 2:
        respuesta = resta(a,b);
        break;
      case 3:
        respuesta = multiplcacion(a,b);
        break;
      case 4:
        respuesta = division(a,b);
        break;
      case 5:
        respuesta = exponencial (a,b);
        break;
    }

    printf ("El resultado de la operación es: %d\n", respuesta);

    printf ("¿Deseas realizar otra operación?: \n");
    
    printf ("¿Qué operación quieres realizar?: \n");
    printf ( "1 - suma\n");
    printf ( "2 - resta\n");
    printf ( "3 - multiplicación\n");
    printf ( "4 - división\n");
    printf ( "-1 - ¿Deseas salir?: \n");
    scanf ("%d&", &option);
  }
  while (option != -1);
  return 0;
}
