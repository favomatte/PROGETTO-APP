#include <stdio.h>
#input from stdin stream
int main()
{
    int ricerca;
    int funzioni;

----------------------------------------------------------------------------------------------------------------------------------
Situata a
Roma,.
Luiss
specializzata nelle scienze sociali.
Con i suoi 4 Dipartimenti: Impresa e Management,
Economia e
Finanza, Giurisprudenza e Scienze Politiche, offre ad oltre 10.000 studenti un ambiente dinamico e internazionale.
----------------------------------------------
    char string[20];
    printf("Enter the string: ");
    fgets(string,20,stdin);         #input from stdin stream
    printf("\nThe string is: %s", string);
    return 0;
}
