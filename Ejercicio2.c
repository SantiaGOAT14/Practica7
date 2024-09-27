#include <stdio.h>
int main ()
{
    int uno, dos, tres;
    printf ("Ingrese 3 números separados por espacios ¡Distintos!: \n");
    scanf ("%d %d %d",&uno, &dos, &tres);
    if (uno > dos)
    {
      printf ("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
    }
    else
    {
        if (uno > tres)
        {
          printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
        }
        else
        {
          printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
        }
    }
    return 0;
}
      
