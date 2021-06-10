#include <stdio.h>
int main(){
  int fruit;
  printf("Por favor ingrese el numero de alguna fruta de la siguiente lista para saber las calorias:\n1.Banana\n2.Manzana\n3.Pera\n4.Naranja\n5.Mandarina\n6.Ciruela\n7.Frutilla\n8.Kiwi\n9.Sandia\nNumero de la fruta: ");
  scanf("%d", &fruit);
  switch (fruit){
  case 1:
    printf("100 gramos de banana contiene 89 calorias\n");
    break;
  case 2:
    printf("100 gramos de manzana contiene 52 calorias\n");
    break;
  case 3:
    printf("100 gramos de pera contiene 57 calorias\n");
    break;
  case 4:
    printf("100 gramos de naranja contiene 47 calorias\n");
    break;
  case 5:
    printf("100 gramos de mandarina contiene 50 calorias\n");
    break;
  case 6:
    printf("100 gramos de ciruela contiene 45 calorias\n");
    break;
  case 7:
    printf("100 gramos de frutilla contiene 33 calorias\n");
    break;
  case 8:
    printf("100 gramos de kiwi contiene 61 calorias\n");
    break;
  case 9:
    printf("100 gramos de sandia contiene 30 calorias\n");
    break;
  default:
  printf("El numero ingresado no esta en la lista\n");
  break;
  }
  return 0;
}