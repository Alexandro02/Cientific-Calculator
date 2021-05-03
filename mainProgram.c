#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

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
    printf("11.- Factorial.\t\t\t 0.- Salir\n");

    scanf("%i", &op);

    // ? Operaciones basicas
    switch (op)
    {
    case 0:
      return 0;
      break;
    case 1:
      Add();
      system("\npause");
      system("cls");
      break;
    case 2:
      Subtraction(numberOne, numberTwo);
      system("\npause");
      system("cls");
      break;
    case 3:
      Multiply(numberOne, numberTwo);
      system("\npause");
      system("cls");
      break;
    case 4:
      Divide(numberOne, numberTwo);
      system("\npause");
      system("cls");
      break;
    case 5:
      Square_Root(numberOne);
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
        Square_Elevation(numberOne);
        system("\npause");
        system("cls");
        break;
      case 2:
        Cube_Elevation(numberOne);
        system("\npause");
        system("cls");
        break;
      case 3:
        Fourth_Elevation(numberOne);
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
        Sine(numberOne);
        system("\npause");
        system("cls");
        break;
      case 2:
        Cosen(numberOne);
        system("\npause");
        system("cls");
        break;
      case 3:
        Tangent(numberOne);
        system("\npause");
        system("cls");
        break;
      case 4:
        Cosecant(numberOne);
        system("\npause");
        system("cls");
        break;
      case 5:
        Secant(numberOne);
        system("\npause");
        system("cls");
        break;
      case 6:
        Cotangent(numberOne);
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
        NaturalLogarithm(numberOne);
        system("\npause");
        system("cls");
        break;
      case 2:
        Base10Logarithm(numberOne);
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
      printf("3.- Multiplicacion de matrices.\t 4.- Resolver mediante metodo montante.\n");
      scanf("%i", &tipe);

      switch (tipe)
      {
      case 1:
        MatrixAddition();
        system("\npause");
        system("cls");
        break;
      case 2:
        MatrixSubstraction();
        system("\npause");
        system("cls");
        break;
      case 3:
        MatrixMultip();
        system("\npause");
        system("cls");
        break;
      /* case 4:
        MontanteMethod();
        system("\npause");
        system("cls");
        break; */
      default:
        printf("Operacion no valida.");
        break;
      }
      break;
    case 10:
      Porcentage(numberOne, numberTwo);
      system("\npause");
      system("cls");
      break;
    case 11:
      Factorial();
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
