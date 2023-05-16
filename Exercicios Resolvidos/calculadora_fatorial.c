/******************************************************************************
C A L C U L A D O R A   DE  F A T O R I A L 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i = 1, fatorial = 0;
    char res;
    
    do{
    printf("\033[2J");
    printf("\033[H");
    printf("---------------------------------\n");
    printf("     Calculadora de Fatorial     \n");
    printf("---------------------------------\n");
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for ( i = 2 ; i <= n ; i++ ){
        if ( i == 2 )
            fatorial = 1 * i; 
        else 
            fatorial = fatorial * i;
    }
    printf("O fatorial de %d é: %d\n", n, fatorial);
    printf("\nDeseja calcular outro fatorial? [S/N]");
    scanf(" %c", &res);
    } while ( res == 's' || res == 'S');
    
    return 0;
}
