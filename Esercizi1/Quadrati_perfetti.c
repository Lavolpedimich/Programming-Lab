#include <stdio.h>

void main ()
{
    //Dichiaro la variabile n
    //n contiene il nunmero di elementi da considerare
    int n;
    printf ("Inserisci un numero valore di n:");
    scanf ("%d", &n);
    printf("Ti stampo i quadrati perfetti fino a %d\n" , n);

    int sq;
    for (int i=1; i<= n; i++ )
    {
        sq = i*i;
        printf ("Il quadrato di %d è %d\n", i, sq);
       
    }
}