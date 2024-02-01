#include <stdio.h>

void blocco1()
{
    char funzioni;
    char n1[4] = ('u','n','i','\0');
    char n2[11] = ('c','l','a','s','s','i','f','i','c','a','\0');
    char n3[11] = ('r','e','c','e','n','z','i','o','n','i','\0');
    
    printf("Digitare la funzione voluta tra:\nuni\nclassifica\nrecensioni\n");
    scanf("%s", funzioni);

    if(funzioni==n1)
    {
        printf("Le uni più cercate dagli utenti sono:\n");
    }
    else if(funzioni==n2)
    {
        printf("Primo classifica giornaliero:\n");
    }
    else if(funzioni==n3)
    {
        printf("Queste sono alcune recensioni delle università più di tendenza!\n");
    }
    return(0);
}
