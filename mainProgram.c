#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //! MAIN PROGRAM
  float numberOne, numberTwo;
  int op, start;
  //! ELEVATION
  int tipe;

  for (start = 0; start >= 0; start++)
  {
    printf("\n\t\t Calculadora Cientifica.\n");

    printf("Ingresa la operacion deseada a realizar.\n");
    printf("1.- Suma\t\t         2.- Resta\n");
    printf("3.- Multiplicacion\t\t 4.- Division\n");
    printf("5.- Raiz cuadrada\t\t 6.- Elevacion de un numero\n");
    printf("7.- Funcion trigonometrica\t 8.- Logaritmo de un numero\n");
    printf("9.- Matrices.\t\t\t 10.- Porcentaje.\n");
    printf("0.- Salir\n");
    scanf("%i", &op);

    // ? Operaciones basicas
    switch (op)
    {
    case 0:
      return 0;
      break;
    case 1:
      printf("Ingresa dos numeros a sumar.\n");
      scanf("%f%f", &numberOne, &numberTwo);
      printf("El resultado de la suma, es: %.2f\n", Add(numberOne, numberTwo));
      system("\npause");
      system("cls");
      break;
    case 2:
      printf("Ingresa dos numeros a restar.\n");
      scanf("%f%f", &numberOne, &numberTwo);
      printf("El resultado de la resta, es: %.2f\n", Subtraction(numberOne, numberTwo));
      system("\npause");
      system("cls");
      break;
    case 3:
      printf("Ingresa dos numeros a multiplicar.\n");
      scanf("%f%f", &numberOne, &numberTwo);
      printf("El resultado de la multiplicacion, es: %.2f\n", Multiply(numberOne, numberTwo));
      system("\npause");
      system("cls");
      break;
    case 4:
      printf("Ingresa dos numeros a dividir.\n");
      scanf("%f%f", &numberOne, &numberTwo);
      printf("El resultado de la division, es: %.2f\n", Divide(numberOne, numberTwo));
      system("\npause");
      system("cls");
      break;
    case 5:
      printf("Ingresa el numero a sacar raiz.\n");
      scanf("%f", &numberOne);
      printf("La raiz cuadrada del numero, es: %.2f\n", Square_Root(numberOne));
      system("\npause");
      system("cls");
      break;

    // ? Tipos de elevacion
    case 6:
      printf("\t\t Ingresa el tipo de elevacion deseada\n");
      printf("1.- Elevacion al cuadrado\n");
      printf("2.- Elevacion al cubo\n");
      printf("3.- Elevacion a la cuarta\n");
      scanf("%i", &tipe);

      switch (tipe)
      {
      case 1:
        printf("Ingresa un numero a elevar al cuadrado.\n");
        scanf("%f", &numberOne);
        printf("El cuadrado del numero, es: %.2f\n", Square_Elevation(numberOne));
        system("\npause");
        system("cls");
        break;
      case 2:
        printf("Ingresa un numero a elevar al cubo.\n");
        scanf("%f", &numberOne);
        printf("El cubo del numero, es: %.2f\n", Cube_Elevation(numberOne));
        system("\npause");
        system("cls");
        break;
      case 3:
        printf("Ingresa un numero a elevar a la cuarta.\n");
        scanf("%f", &numberOne);
        printf("La elevacion a la cuarta del numero, es: %.2f\n", Fourth_Elevation(numberOne));
        system("\npause");
        system("cls");
        break;
      default:
        printf("Esa no es una opcion valida");
        break;
      }
      break;
    // ? Funciones trigonometricas
    case 7:
      printf("Elige el tipo de funcion a usar.\n");
      printf("1.- Seno       2.- Coseno \n");
      printf("3.- Tangente   4.-Cosecante\n");
      printf("5.- Secante    6.- Cotangente\n");
      scanf("%i", &tipe);

      switch (tipe)
      {
      case 1:
        printf("Ingresa un numero a obtener su seno\n");
        scanf("%f", &numberOne);
        printf("El seno del numero, es: %.2f\n", Sine(numberOne));
        system("\npause");
        system("cls");
        break;
      case 2:
        printf("Ingresa un numero a obtener su coseno\n");
        scanf("%f", &numberOne);
        printf("El coseno del numero, es: %.2f\n", Cosen(numberOne));
        system("\npause");
        system("cls");
        break;
      case 3:
        printf("Ingresa un numero a obtener su tangente\n");
        scanf("%f", &numberOne);
        printf("La tangente del numero, es: %.2f\n", Tangent(numberOne));
        system("\npause");
        system("cls");
        break;
      case 4:
        printf("Ingresa un numero a obtener su cosecante\n");
        scanf("%f", &numberOne);
        printf("La cosecante del numero, es: %.2f\n", Cosecant(numberOne));
        system("\npause");
        system("cls");
        break;
      case 5:
        printf("Ingresa un numero a obtener su secante\n");
        scanf("%f", &numberOne);
        printf("La secante del numero, es: %.2f\n", Secant(numberOne));
        system("\npause");
        system("cls");
        break;
      case 6:
        printf("Ingresa un numero a obtener su cotangente\n");
        scanf("%f", &numberOne);
        printf("La cotangente del numero, es: %.2f\n", Cotangent(numberOne));
        system("\npause");
        system("cls");
        break;
      default:
        printf("Operacion invalida.\n");
        break;
      }
      break;
      //? Natural Logatithm
    case 8:
      printf("Ingresa el tipo de logaritmo deseado:\n");
      printf("1.- Logaritmo natural\t 2.- Logaritmo base 10\n");
      scanf("%i", &tipe);

      switch (tipe)
      {
      case 1:
        printf("Ingresa un numero a sacar su logaritmo natural\n");
        scanf("%f", &numberOne);
        printf("El logaritmo del numero, es: %.2f\n", NaturalLogarithm(numberOne));
        system("\npause");
        system("cls");
        break;
      case 2:
        printf("\tIngresa un numero a sacar su logaritmo base 10\n");
        scanf("%f", &numberOne);
        printf("El logaritmo base 10 del numero, es: %.2f\n", Base10Logarithm(numberOne));
        system("\npause");
        system("cls");
        break;
      default:
        printf("\nOpcion no disponible");
        system("\npause");
        system("cls");
        break;
      }
      break;
      //? Matrix
    case 9:
      printf("\t\t Selecciona la operacion de matrices deseada: \n");
      printf("1.- Suma de matrices.\t\t 2.- Resta de matrices.\n");
      printf("3.- Multiplicacion de matrices.");
      printf("\t \n");
      scanf("%i", &tipe);

      switch (tipe)
      {
      case 1:
        printf(" ", MatrixAddition());
        system("\npause");
        system("cls");
        break;
      case 2:
        printf(" ", MatrixSubstraction());
        system("\npause");
        system("cls");
        break;
      case 3:
        printf(" ", MatrixMultip());
        system("\npause");
        system("cls");
        break;
      default:
        printf("Operacion no valida.");
        break;
      }
      break;
    case 10:
      printf("\n", Porcentage(numberOne, numberTwo));
      system("\npause");
      system("cls");
      break;
    default:
      printf("\nEsa operacion no esta disponible o ingresaste una no valida, intenta de nuevo.\n");
      system("\npause");
      system("cls");
      break;
    }
  }
  system("\npause");
  return 0;
}
