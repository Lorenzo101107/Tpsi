//Dopo aver dichiarato un vettore di numeri interi 
//Leggere in imput gli elementi 
//e sommarli visualizzando il risultato 

#include <stdio.h>
int main()
{
    int somma=0, vettore[10], i, n;
    do{
    printf("Quanti elementi vuoi inserire? (max 10)\n");
    scanf("%d",&n);
    }while(n<=0);
    for(i=0;i<n;i++){
        printf("Inserisci gli elemeti %d",i+1);
        scanf("%d",&vettore[i]);
        somma=somma+vettore[i];
    }
    printf("La somma e' %d", somma);
    return 0;
}