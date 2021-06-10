#include <stdio.h>
int main(){
  int fruit, n;
  printf("Por favor ingrese el numero de alguna fruta de la siguiente lista para saber las calorias:\n1.Banana\n2.Manzana\n3.Pera\n4.Naranja\nNumero de la fruta: ");
  scanf("%d", &fruit);
  switch (fruit){
  case 1:
    printf("Ingresa 1 si quieres que sea las calorias por 100 gramos o ingresa 2 si quieres que sea por una pieza de fruta: ");
    scanf("%d",&n);
    if (n==1||n==2){
      if (n==1){
        printf("100 gramos de banana contiene 89 calorias\n");
      }else{
        printf("Una banana contiene 105 calorias\n");
      }
    }else{
      printf("Error el valor ingresado no es valido\n");
    }
    break;
  case 2:
    printf("Ingresa 1 si quieres que sea las calorias por 100 gramos o ingresa 2 si quieres que sea por una pieza de fruta: ");
    scanf("%d",&n);
    if (n==1||n==2){
      if (n==1){
        printf("100 gramos de manzana contiene 52 calorias\n");
      }else{
        printf("Una manzana contiene 72 calorias\n");
      }
    }else{
      printf("Error el valor ingresado no es valido\n");
    }
    break;
  case 3:
    printf("Ingresa 1 si quieres que sea las calorias por 100 gramos o ingresa 2 si quieres que sea por una pieza de fruta: ");
    scanf("%d",&n);
    if (n==1||n==2){
      if (n==1){
        printf("100 gramos de pera contiene 57 calorias\n");
      }else{
        printf("Una pera contiene 96 calorias\n");
      }
    }else{
      printf("Error el valor ingresado no es valido\n");
    }
    break;
  case 4:
    printf("Ingresa 1 si quieres que sea las calorias por 100 gramos o ingresa 2 si quieres que sea por una pieza de fruta: ");
    scanf("%d",&n);
    if (n==1||n==2){
      if (n==1){
        printf("100 gramos de naranja contiene 47 calorias\n");
      }else{
        printf("Una naranja contiene 62 calorias\n");
      }
    }else{
      printf("Error el valor ingresado no es valido\n");
    }
    break;
  default:
  printf("El numero ingresado no esta en la lista\n");
  break;
  }
  return 0;
}