#include <stdio.h>

int main(){
    
    int num;
    
    printf("Informe qual número você deseja descobrir se é impar ou par: ");
    scanf("%d", &num);
        
        //incrementando a condicional if para o resto = a 0
        
        if (num % 2 == 0)
        printf("\nO número inserido é par.");
        else 
        printf("\nO número inserido é ímpar.");
    
    return 0;
}