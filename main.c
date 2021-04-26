/*

    spicoli piersilvio
    utilizzo della nuova variabile puntatore

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* ptA;
    int* ptB;

    int A = 3, B = 5;

    ptA = &A; //passo alla variabile puntatore l'indirizzo della variabile A (analogo per B)
    ptB = &B;

    printf("\n\t_> referenzia della var. A: %X \t_> valore var. A: %d\n", ptA, A);
    printf("\n\t_> referenzia della var. B: %X \t_> valore var. B: %d\n", ptB, B);

    return 0;
}
