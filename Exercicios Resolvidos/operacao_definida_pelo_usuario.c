/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2, result;
    char operacao;
    
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Segundo numero: ");
    scanf("%d", &n2);
    
    printf("Qual operação: ");
    scanf(" %c", &operacao);
    
    if ( operacao == '/' && n2 == 0) {
        printf("Erro divisão por 0");
        
        return 0;
    }
    
    switch ( operacao ) { // faz a mesma coisa que o if mas de uma forma mais simples
                        // vai definir o que vai acontecer dependendo da operação digitada
        
        case '+': // note que aqui é necessario usar ":"
        printf("%d + %d = %d", n1, n2, result = n1 + n2);
        break;
        
        case '-':
        printf("%d - %d = %d", n1, n2, result = n1 - n2);
        break;
        
        case '*':
        printf("%d * %d = %d", n1, n2, result = n1 * n2);
        break;
        
        case '/':
        printf("%d / %d = %d", n1, n2, result = n1 / n2);
        break;
    }

    return 0;
}
