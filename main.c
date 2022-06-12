#include <stdio.h>

//Declaración de Funciones
int EsPerfecto(int n);

//Declaración de macros.

int main() {

    int num;
    printf("Introduce un numero:");

    scanf("%i",&num);

    int n_perfecto = EsPerfecto(num);

    if(n_perfecto == 1)
    {
        printf("El %i es un numero perfecto",num);
    }
    else
    {
        printf("El %i no es un numero perfecto", num);
    }

    return 0;
}

// Metodo que calcula los numeros perfectos.

int EsPerfecto(int n)
{
    int s_perfecto;
    int count_n;

    count_n = 1;
    s_perfecto = 0;

    while(s_perfecto != n && count_n < n)
    {
        if(n % count_n == 0)
        {
            s_perfecto = s_perfecto + count_n;
        }

        count_n++;
    }

    if(s_perfecto == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
