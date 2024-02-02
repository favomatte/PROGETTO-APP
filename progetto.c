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
int blocco1()
{    
    char parola[20];
    ret:
    printf("Inserisci una parola tra 'uni' e 'classifica':\n");
    scanf("%s", parola);

    if (confrontaStringhe(parola, "uni")) 
    {
        printf("Le uni di tendenza della tua città sono:\nLuiss\nLa Sapienza\nTor Vergata\n");
        return(1);
    }
    else if (confrontaStringhe(parola, "classifica")) 
    {
        printf("i primi della classifica sono:\n1. del giorno: Loft Luiss\n1. della settimana: Aula studio h24\n1. del mese: Aula a ferro di cavallo\n");
        return(1);
    } 
    else 
    {
        printf("Inserisci un opzione inerente.\n");
        goto ret;      
    }
    return(1);

}
int blocco2()
{
    char parola2[100];
    ret:
    printf("Cerca la tua università o un luogo entro 1km da essa:\n");
    scanf(" %[^'\n']s",parola2);
    
        if (confrontaStringhe(parola2, "Luiss Guido Carli")||confrontaStringhe(parola2,"Luiss")|| confrontaStringhe(parola2,"luiss") || confrontaStringhe(parola2,"luiss guido carli")) 
        {
            printf("Situata a Roma, l'università Luiss è specializzata nelle scienze sociali.\nCon i suoi 4 Dipartimenti:\nImpresa e Management,Economia e Finanza, Giurisprudenza e Scienze Politiche,\noffre ad oltre 10.000 studenti un ambiente dinamico e internazionale.\nper andare al sito cliccare sul link:\nhttps://www.luiss.it/\n");
            return(1);
        }
        else if (confrontaStringhe(parola2, "Tor Vergata")||confrontaStringhe(parola2,"tor vergata"))
        {
            printf("L'Università degli Studi di Roma «Tor Vergata» è un'università statale italiana, con sede a Roma, nell'omonimo quartiere.\nSeconda università statale della Capitale in ordine cronologico di fondazione,\nla sede dell'ateneo è progettata sul modello dei campus anglosassoni e occupa un'area di circa cinquecento ettari.\nper andare al sito cliccare sul link:\nhttps://web.uniroma2.it/\n");
            return(1);
        } 
        else if(confrontaStringhe(parola2, "Roma3")||confrontaStringhe(parola2,"roma 3") ||confrontaStringhe(parola2,"roma3")||confrontaStringhe(parola2,"Roma 3"))
        {
            printf("Università degli Studi Roma Tre è un'università giovane e per giovani,\nè nata nel 1992 ed è rapidamente cresciuta sia in termini di studenti che di corsi di studio offerti.\nSono attivi 13 dipartimenti che offrono corsi di: Laurea,Laurea magistrale,Master, Corsi di perfezionamento e scuole di specializzazione.per andare al sito cliccare sul link:\nhttps://www.uniroma3.it/\n");
            return(1);
        }
        else if (confrontaStringhe(parola2, "Aula a ferro di cavallo")||confrontaStringhe(parola2,"aula a ferro di cavallo")) 
        {
            printf("Una delle aule studio della Luiss preferita dagli studenti, situata al terzo pianno dell' edificio scolastico, che presenta una suggestiva vista sulla chiesa sconsacrata, ora adibita a classe");
            return(1);
        } 
        else if (confrontaStringhe(parola2, "Università la Sapienza") || confrontaStringhe(parola2, "Sapienza") ||confrontaStringhe(parola2, "sapienza")||confrontaStringhe(parola2, "la sapienza") || confrontaStringhe(parola2,"La sapienza")) 
        {

            printf("Con una storia lunga 720 anni, 57 dipartimenti e ben 11 facoltà,\noltre 121.000 iscritti e circa 8.000 tra docenti e personale tecnico-amministrativo-bibliotecario,\nla Sapienza è il più grande ateneo del Europa e uno dei più importanti al mondo.\nper andare al sito cliccare sul link:\n https://www.uniroma1.it/it/pagina-strutturale/home\n ");
            return(1);
        } 
        else if ( confrontaStringhe(parola2,"Osteria ancora qua")|| confrontaStringhe(parola2,"osteria ancora qua"))
        {
            printf("Il ristorante da te cercato è nel raggio di un 1km dal Università la Sapienza\n");
            return(1);
        }
        else 
        {
            printf("Ci dispiace, ma la tua università/luogo non è ancora stato aggiunto a Uni+.\n");
            goto ret;
        }
        return(1);

}
int blocco3()
{
    char parola3[100];
    printf("Cerca la community della tua università!\n");
    scanf(" %[^'\n']s", parola3);
    ret:
        if (confrontaStringhe(parola3, "Luiss Guido Carli") || confrontaStringhe(parola3,"Luiss") || confrontaStringhe(parola3,"luiss") || confrontaStringhe(parola3,"luiss guido carli"))
        {
            printf("Benvenuto nella community della Libera Università Internazionale degli Studi Sociali Guido Carli!\n");
            return(1);
        }
        else if (confrontaStringhe(parola3, "Università la Sapienza") || confrontaStringhe(parola3, "Sapienza") || confrontaStringhe(parola3, "la sapienza") || confrontaStringhe(parola3, "sapienza") || confrontaStringhe(parola3,"La sapienza") || confrontaStringhe(parola3,"la Sapienza")) 
        {
            printf("Benvenuto nella community del Università la Sapienza!\nper andare al sito cliccare sul link:\n");
            return(1);
        } 
        else if (confrontaStringhe(parola3, "Università di Tor Vergata") || confrontaStringhe(parola3, "Tor Vergata") || confrontaStringhe(parola3,"tor vergata") || confrontaStringhe(parola3,"Tor vergata")) 
        {
            printf("Benvenuto nella community del Università di Tor Vergata!\n");
            return(1);
        } 
        else 
        {
            printf("Inserisci un opzione inerente.\n");
        goto ret;
        }
        return(1);
}
int blocco4()
    {
        char parola4[100];
        char parola5[100];
        char parola6[100];
        char parola7[100];
        char parola8[100];
        char parola9[100];
        printf("Inserisci  Nome:\n");
        scanf(" %[^'\n']s", parola4);
        printf("Inserisci Cognome:\n");
        scanf(" %[^'\n']s", parola5);
        printf("Inserisci Username:\n");
        scanf(" %[^'\n']s", parola6);
        printf("Inserisci l'università che frequenti:\n");
        scanf(" %[^'\n']s", parola7);
        printf("inserisci un e-mail valida:\n");
        scanf(" %[^'\n']s", parola8);
        printf("Crea una password *ATENZIONE, la password deve essere lunga minimo 8 caratteri e deve comprendere almeno un numero e un carattere speciale*:\n");
        scanf(" %[^'\n']s", parola9);
        printf("Il tuo account è stato creato!\nBenvenuti\n %s!", parola6);
        return(1);
        
    }
int main() 
{
    char pagina[10];
    
    printf("\033[1;34m"\
"\n"\
" /$$   /$$       /$$   /$$       /$$$$$$\n"\
"| $$  | $$      | $$$ | $$      |_  $$_/          /$$\n"\
"| $$  | $$      | $$$$| $$        | $$           | $$\n"\
"| $$  | $$      | $$ $$ $$        | $$         /$$$$$$$$\n"\
"| $$  | $$      | $$  $$$$        | $$        |__  $$__/\n"\
"| $$  | $$      | $$\\  $$$        | $$           | $$\n"\
"|  $$$$$$/      | $$ \\  $$       /$$$$$$         |__/\n"\
" \\______/       |__/  \\__/      |______/\n"\
"\n\033[m" );

    up:
    printf("\033[1;32mBENVENUTI IN UNI+!\033[m\n");
    printf("Scegli la pagina da visualizzare:\n\033[1;31mHOME \033[0m\n\033[1;35mCERCA \033[m\n\033[1;32mCOMMUNITY \033[m\n\033[1;33mACCOUNT \033[m\n");
    scanf(" %[^'\n']s", pagina);
    if(confrontaStringhe(pagina, "HOME"))
        {
            if (blocco1() == 1)
            {
                goto up;
            }
        }
    else if(confrontaStringhe(pagina, "CERCA"))
        {
            if(blocco2() == 1)
            {
                goto up;
            }
        }
    else if(confrontaStringhe(pagina, "COMMUNITY"))
        {
            if(blocco3() == 1)
            {
                goto up;
            }

        }
    else if (confrontaStringhe(pagina, "ACCOUNT"))
        {
            if (blocco4() == 1)
            {
                goto up;
            }
        }
    
    return(0); 
}