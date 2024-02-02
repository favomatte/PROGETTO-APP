#include <stdio.h>

int confrontaStringhe(const char *s1, const char *s2) 
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) 
    {
        s1++;
        s2++;
    }

    return (*s1 == '\0' && *s2 == '\0');
}

int main() 
{
    char parola[20];

    printf("Inserisci una parola tra 'uni', 'classifica' e 'recensioni': ");
    scanf("%s", parola);

    if (confrontaStringhe(parola, "uni")) 
    {
        printf("Le uni di tendenza della tua città sono:\nLuiss\nLa Sapienza\nTor Vergata\n");
    }
     else if (confrontaStringhe(parola, "classifica")) 
    {
        printf("\n");
    
    } else if (confrontaStringhe(parola, "recensioni")) 
    {
        printf(".\n");
    } 
    else 
    {
        printf("Inserisci un opzione inerente.\n");
        return(0);
    }

       

}