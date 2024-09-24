#include <stdio.h>

int main()
{   
    float nota1, nota2, nota3, media;
    printf("Digite a sua nota da 1° unidade: ");
    scanf("%f", &nota1);
    printf("\nDigite a sua nota da 2° unidade: ");
    scanf("%f", &nota2);
    printf("\nE por último, qual foi a nota da sua última unidade? ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media<= 2.5){
        printf("\nREPROVADO");
    }
    else if (media< 6.9){
        printf("\nPROVA FINAL");
    } else {
        printf("\nAPROVADO");
    }
    return 0;
}