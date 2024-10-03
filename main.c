#include <stdio.h>

int main(void)
{
    int giorno, mese, anno;
    printf("Inserisci il giorno in formato GG: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese  in formato MM: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno in formato AAAA: ");
    scanf("%d", &anno);
    int giorniinunmese;
    switch (mese){
    case 1:
        giorniinunmese = 30;
        break;
    case 2:
        if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){
            giorniinunmese = 29;}
        else{
            giorniinunmese = 28;}
        break;
    default:
        giorniinunmese = 31;}
    if (mese < 1 || mese > 12 || giorno < 1 || giorno > giorniinunmese){
        printf("La data %02d/%02d/%04d non è corretta.\n", giorno, mese, anno);}
    else{
        printf("La data %02d/%02d/%04d è corretta.\n", giorno, mese, anno);}
    return 0;
}
