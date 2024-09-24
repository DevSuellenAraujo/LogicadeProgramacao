#include <stdio.h>

int main()
{   
    float peso, altura, media;
    char nome[30];
    
    printf("Qual seu nome? ");
    scanf("%s%*c", nome);
    printf("\nInforme seu peso: ");
    scanf("%f%*c", &peso);
    printf("\nInforme sua altura: ");
    scanf("%f%*c", &altura);
    
    media = peso / (altura * altura);
    
    if (media>= 24.9){
        printf("Olá %s, seu IMC foi de %2.f, então você foi caracterizado como Obeso.", nome, media);
    }
    else if (media <= 18.4){
        printf("Olá %s, seu IMC foi de %2.f, então você foi caracterizado como Desnutrido.", nome, media);
    } else {
        printf("Olá %s, seu IMC foi de %2.f, então você foi caracterizado como Normal.", nome, media);
    }
    
    return 0;
}