
/* 

                        Vetor_Vazio_Preenchido_Pelo_Usuário

Programa que permite você inserir valores em um vetor através de um scanf dentro de um for


*/

#include <stdio.h>

int main()
{
    int vetor[5];
    int k;
    
    
    for ( k = 0 ; k < 5 ; k++ ){
        vetor[k] = 1 + 2 ;
        printf("Numero: ");
        scanf("%d", &vetor[k]);
    }
    
    for ( k = 0 ; k < 5 ; k++ ){
        printf("%d ", vetor[k] );
    }

    return 0;
}
