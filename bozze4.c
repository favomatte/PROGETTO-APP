int confrontaStringhe(const char *s1, const char *s2) 
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) 
    {
        s1++;
        s2++;
    }

    return (*s1 == '\0' && *s2 == '\0');
}

int blocco2()
{
    char parola2[100];
    printf("Cerca la tua università o un luogo:")
    

    
}

int blocco3()
{
    char parola3[100];
    printf("Cerca la community della tua università!");
    scanf("%s[^'\n']parola2", parola3);
    ret:
        if (confrontaStringhe(parola3, "Luiss Guido Carli" || "Luiss" || "luiss" || "luiss guido carli"))
        {
            printf("\n");
        }
        else if (confrontaStringhe(parola3, "Università la Sapienza" || "Sapienza" || "la sapienza" || "sapienza" || "La sapienza" || "la Sapienza")) 
        {
            printf("\n");
        
        } else if (confrontaStringhe(parola3, "Università di Tor Vergata" || "Tor Vergata" || "tor vergata" || "Tor vergata" ||)) 
        {
            printf("\n");
        } 
        else 
        {
            printf("Inserisci un opzione inerente.\n");
        goto ret;
       
        }
    
}
int main() 
{
    char parola[20];
    ret:
        printf("Inserisci una parola tra 'uni', 'classifica' e 'recensioni':\n");
        scanf("%s", parola);

        if (confrontaStringhe(parola, "uni")) 
        {
            printf("Le uni di tendenza della tua città sono:\nLuiss\nLa Sapienza\nTor Vergata\n");
        }
        else if (confrontaStringhe(parola, "classifica")) 
        {
            printf("i primi della classifica sono:\n1. del giorno: Loft Luiss\n1. della settimana: Doom 3\n1. del mese: Aula a ferro di cavallo\n");
        
        } else if (confrontaStringhe(parola, "recensioni")) 
        {
            printf("\n");
        } 
        else 
        {
            printf("Inserisci un opzione inerente.\n");
        goto ret;
       
        }

    return(0); 

}