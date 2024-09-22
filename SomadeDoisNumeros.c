#include <stdio.h>

int main(){
    
    //inserindo as variáveis
    
    int num1, num2, soma;
    
    //entrada dos dados
    
    printf("Escreva o primeiro número para ser somado: ");
    scanf("%d", &num1);
    printf("\nEscreva o segundo número para ser somado: ");
    scanf("%d", &num2);
    
    //soma dos dois números
    
    soma = num1 + num2;
    
    //saída dos dados somados
    printf("\nA soma dos números inseridos foi: %d", soma);
    
    return 0;
}