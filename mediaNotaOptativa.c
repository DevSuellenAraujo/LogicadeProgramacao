#include <stdio.h>

int main()
{
    int nota1, nota2, resp, notaopt;
    float media;
    
    printf("Digite a nota que você tirou na primeira prova: ");
    scanf("%d", &nota1);
    printf("\nDigite a nota que você tirou na segunda prova: ");
    scanf("%d", &nota2);
    printf("Você optou por fazer alguma matéria optativa? Se sim, digite ""1"", senão ""-1: ");
    scanf("%d", &resp);
    
    if (resp == -1){
        
        media = (nota1 + nota2)/ 2;
        printf("\nA sua média foi:  %2.f", media);
    } 
    if (resp == 1){
        printf("\nDigite a nota que você tirou na matéria optativa: ");
        scanf("%d", &notaopt);
        media = (notaopt + nota1 + nota2) / 3;
        printf("\nA sua média foi:  %2.f", media);
    }

    return 0;
}