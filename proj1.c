/*
**
** Vojtěch Marek
** xmarek64 @ VUT FIT
** 2017/2018
**
*/

#include <stdio.h>
#include <stdlib.h>
/*předavame funkci */
void vymen (int *ux, int *uy)
{
    int pomoc;
    pomoc = *ux;
    *ux = *uy;
    *uy = pomoc;

}

int main(void)
{
  int x, y;
  printf("Zadejte dvě čísla:\n");
  scanf("%d %d",&x, &y);
  printf("Vaše čísla jsou\nx: %d\ny: %d\n", x, y);
  printf("Chcete hodnoty proměnných přehodit? (y/n)\n");
  char z;
  while ((z =getchar()) != EOF)
  {
    if (z == 'y'|| z == 'Y')
    {
      vymen(&x, &y); //musíme funkci předat adresy prom. jinak funkce pouze vymeni kopie argumentů, ale prom v mainu zůstanou nezmenene
      printf("Vámi vyměněné proměnné jsou nyní:\n");
      printf("x: %d\ny: %d\n", x, y);
      return 0;
    }
    else if (z == 'n' || z == 'N')
    {
      printf ("\nKonec programu\n");
      return 0;
    }
  }

  return 0;
}
