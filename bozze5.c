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
    char parola2[100];

    printf("Cerca la tua università o un luogo nell'università:");
    scanf("%s[^'\n']parola2",parola2);
    
    if (confrontaStringhe(parola2, "Luiss Guido Carli"||"Luiss"|| "luiss" || "luiss guido carli")) 
        {
            printf("");
        }
        else if (confrontaStringhe(parola2, "Doom3"||"doom3")) 
        {
            printf("");
        
        } else if (confrontaStringhe(parola2, "Università la Sapienza" || "Sapienza" || "la sapienza" || "sapienza" || "La sapienza" || "la Sapienza")) 
        {
            printf("\n");
        } 
        else if (confrontaStringhe(parola2, "Osteria ancora qua"||"osteria ancora qua"))
        {
            printf("Il ristorante da te cercato è entro un 1km dalla tua università\n")
        }
        else 
        {
            printf("Ci dispiace, ma la tua università/luogo non è ancora stato aggiunto a Uni+.\n");
        goto ret;
       
        }
    
    return(0);

}