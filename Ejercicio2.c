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
//Este fue el desarrollado en clase, sin embargo en casa cambié un poco el programa para que fuera cierto
    // Se deternuba el orden de los números
    if (uno > dos && uno > tres) {
        // uno es mayor
        if (dos > tres) {
            printf("%d es mayor que %d, que es mayor que %d\n", uno, dos, tres);
        } else {
            printf("%d es mayor que %d, que es mayor que %d\n", uno, tres, dos);
        }
    } else if (dos > uno && dos > tres) {
        // dos es mayor
        if (uno > tres) {
            printf("%d es mayor que %d, que es mayor que %d\n", dos, uno, tres);
        } else {
            printf("%d es mayor que %d, que es mayor que %d\n", dos, tres, uno);
        }
    } else {
        // tres es mayor
        if (uno > dos) {
            printf("%d es mayor que %d, que es mayor que %d\n", tres, uno, dos);
        } else {
            printf("%d es mayor que %d, que es mayor que %d\n", tres, dos, uno);
        }
    }

    return 0;
}

