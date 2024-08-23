#include <stdio.h>


int main (){

  int r1, r2, r3, r4, r5;

  printf("Tem compromisso no dia? Diga 1 para sim ou 0 para nao.");
  scanf("%d", &r1);


  if (r1==0)
  {
      printf("Estara na cidade? Diga 1 para sim ou 0 para nao.");
      scanf("%d", &r2);

    if (r2==1)
    {
        printf("Tem dinheiro? Diga 1 para sim ou 0 para nao.");
        scanf("%d", &r3);

      if (r3==1)
      {
          printf("Estara chovendo? Diga 1 para sim ou 0 para nao.");
          scanf("%d", &r4);
      }

      else if (r3==0)
      {
          printf("Esta perto? Diga 1 para sim ou 0 para nao.");
          scanf("%d", &r5);;
      }
      
    }
    
  }

  if (r1==0 && r2==1 && r4==0 || r5==1)
  {
    printf("Pode viajar!");
  }

  else if (r1==1 || r2==0 || r4==1 || r5==0)
  {
    printf("Sem viagem!");
  }

  return 0;
}