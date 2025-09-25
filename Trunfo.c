#include <stdio.h>

int main () {
  char Estado[50];
  char Estado2[50];
  char Card[20];
  char Card2[20];
  char Cidade[50];
  char Cidade2[50];
  double População;
  double População2;
  double area;
  double area2;
  double PIB;
  double PIB2;
  int PT;
  int PT2;
   
   

    
   
   
   

    printf("Carta 1\nDigite o nome do Estado: ");
    scanf(" %[^\n]", Estado); // aceita nomes com espaço

    printf("Digite o código da carta: ");
    scanf("%s", Card);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", Cidade); // aceita nomes com espaço

    printf("Digite a População: ");
    scanf("%lf", &População);

    printf("Digite a área: ");
    scanf("%lf", &area);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB);

    printf("Digite o PT: ");
    scanf("%d", &PT);


printf("Carta 2\nDigite o nome do Estado: ");
    scanf(" %[^\n]", Estado2); // aceita nomes com espaço

    printf("Digite o código da carta: ");
    scanf("%s", &Card2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", &Cidade2); // aceita nomes com espaço

    printf("Digite a População: ");
    scanf("%lf", &População2);

    printf("Digite a área: ");
    scanf("%lf", &area2);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB2);

    printf("Digite o PT: ");
    scanf("%d", &PT2);



  printf("\n--- Carta 1 ---\nEstado: %s \n| Código da Carta: %s \n| Nome da Cidade: %s \n| População: %.3lf habitantes \n| Área: %.1lf km² \n| PIB: %.1lf milhões de reais \n| PT: %d\n", 
       Estado, Card, Cidade, População, area, PIB, PT);

 printf("\n--- Carta 2 ---\nEstado: %s \n| Código da Carta: %s \n| Nome da Cidade: %s \n| População: %.3lf habitantes \n| Área: %.1lf km² \n| PIB: %.1lf milhões de reais \n| PT: %d\n", 
       Estado2, Card2, Cidade2, População2, area2, PIB2, PT2);

    


    return 0;
}
