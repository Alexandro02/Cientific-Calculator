#include <stdio.h>
#include <math.h>

// ? Funciones de calculadora básicas
//* Suma
int Add()
{
  int n, sum = 0, c, nums[100];

  printf("Ingresa la cantidad de numeros a sumar\n");
  scanf("%d", &n);

  for (c = 0; c < n; c++)
  {
    printf("Ingresa el numero %i: ", c);
    scanf("%d", &nums[c]);
    sum += nums[c];
  }

  printf("El resultado de la suma es = %d\n", sum);

  return sum;
}
//* Resta
float Subtraction(float num1, float num2)
{
  float subt = 0;

  printf("Ingresa el valor a restar numero 1: ");
  scanf("%f", &num1);
  printf("Ingresa el valor a restar numero 2: ");
  scanf("%f", &num2);

  subt = num1 - num2;

  printf("El resultado de la resta es = %.2f\n", subt);

  return subt;
}
//* multiplicacion
float Multiply(float num1, float num2)
{
  float mult = 0;

  printf("Ingresa el valor a multiplicar numero 1: ");
  scanf("%f", &num1);
  printf("Ingresa el valor a multiplicar numero 2: ");
  scanf("%f", &num2);

  mult = num1 * num2;

  printf("El resultado de la multiplicacion es = %.2f\n", mult);

  return mult;
}
//* division
float Divide(float num1, float num2)
{
  float division = 0;

  printf("Ingresa el valor a dividir numero 1: ");
  scanf("%f", &num1);
  printf("Ingresa el valor a dividir numero 2: ");
  scanf("%f", &num2);

  division = num1 / num2;

  printf("El resultado de la division es = %.2f\n", division);

  return division;
}

//* raiz cuadrada
float Square_Root(float num1)
{
  float squareRoot;

  printf("Ingresa un numero a sacar raiz cuadrada\n");
  scanf("%f", &num1);

  squareRoot = sqrt(num1);

  printf("La raiz cuadrada del numoer es = %.2f\n", squareRoot);

  return squareRoot;
}
// ? Tipos de elevacion
//* elevacion al cuadrado
float Square_Elevation(float num1)
{
  float squareElev;

  printf("Ingresa un numero a elevar al cuadrado.\n");
  scanf("%f", &num1);

  squareElev = pow(num1, 2);

  printf("El cuadrado del numero es = %.2f\n", squareElev);

  return squareElev;
}
//* elevacion al cubo
float Cube_Elevation(float num1)
{
  float cubeElev;

  printf("Ingresa un numero a elevar al cubo.\n");
  scanf("%f", &num1);

  cubeElev = pow(num1, 3);

  printf("El cubo del numero, es: %.2f\n", cubeElev);

  return cubeElev;
}
//* elevacion a la cuarta
float Fourth_Elevation(float num1)
{
  float fourthElev;

  printf("Ingresa un numero a elevar a la cuarta.\n");
  scanf("%f", &num1);

  fourthElev = pow(num1, 4);

  printf("La elevacion a la cuarta del numero, es: %.2f\n", fourthElev);

  return fourthElev;
}

// ? Trigonometric functions

const float PI = 3.1416;
//* seno
float Sine(float num1)
{
  float sine, degree;

  printf("Ingresa un numero a obtener su seno\n");
  scanf("%f", &num1);

  degree = num1 * (PI / 180);
  sine = sin(degree);

  printf("El seno del numero, es: %.2f\n", sine);

  return sine;
}
//* coseno
float Cosen(float num1)
{
  float cosine, degree;

  printf("Ingresa un numero a obtener su coseno\n");
  scanf("%f", &num1);

  degree = num1 * (PI / 180);
  cosine = cos(degree);

  printf("El coseno del numero, es: %.2f\n", cosine);

  return cosine;
}
//* tangente
float Tangent(float num1)
{
  float tangent, degree;

  printf("Ingresa un numero a obtener su tangente\n");
  scanf("%f", &num1);

  degree = num1 * (PI / 180);
  tangent = tan(degree);

  printf("La tangente del numero, es: %.2f\n", tangent);

  return tangent;
}
//* Cosecante
float Cosecant(float num1)
{
  float coSecant, degree;

  printf("Ingresa un numero a obtener su cosecante\n");
  scanf("%f", &num1);

  degree = num1 * (PI / 180);
  coSecant = 1 / sin(degree);

  printf("La cosecante del numero, es: %.2f\n", coSecant);

  return coSecant;
}
//* Secante
float Secant(float num1)
{
  float secant, degree;

  printf("Ingresa un numero a obtener su secante\n");
  scanf("%f", &num1);

  degree = num1 * (PI / 180);
  secant = 1 / cos(degree);

  printf("La secante del numero, es: %.2f\n", secant);

  return secant;
}
//* Cotangente
float Cotangent(float num1)
{
  float cotangent, degree;

  printf("Ingresa un numero a obtener su cotangente\n");
  scanf("%f", &num1);

  degree = num1 * (PI / 180);
  cotangent = 1 / tan(degree);

  printf("La cotangente del numero, es: %.2f\n", cotangent);

  return cotangent;
}

//? Logarithmic functions
float NaturalLogarithm(float num1)
{
  float Log;

  printf("Ingresa un numero a sacar su logaritmo natural\n");
  scanf("%f", &num1);

  Log = log(num1);

  printf("El logaritmo del numero, es: %.2f\n", Log);

  return Log;
}
float Base10Logarithm(float num1)
{
  float loga10;

  printf("Ingresa un numero a sacar su logaritmo base 10\n");
  scanf("%f", &num1);

  loga10 = log10(num1);

  printf("El logaritmo base 10 del numero, es: %.2f\n", loga10);

  return loga10;
}

//* Factorial

int Factorial()
{
  int fact = 1, i, num;

  printf("Ingresa un numero a obtener su factorial\n");
  scanf("%d", &num);

  for (i = num; i > 1; i--)
  {
    fact *= i;
  }

  printf("El factorial de %i, es: %i", num, fact);

  return fact;
}

//* Porcentaje

float Porcentage(float num1, float num2)
{
  float percentage;

  printf("Ingresa el numero y la cantidad de porcentaje a sacar: \n");
  scanf("%f%f", &num1, &num2);

  percentage = (num1 * num2) / 100;

  printf("El porcentaje de %.2f es = %.2f\n", num1, percentage);

  return percentage;
}

//? Matrix addition, substaction, multiplication and division.

int matrix1[100][100], matrix2[100][100], sum[100][100], subst[100][100], mult[100][100];
int i, j, rws, clms;

//? Matrix addition.
int MatrixAddition()
{
  //! Getting values.

  printf("Introduce las filas de las matrices: \n");
  scanf("%i", &rws);
  printf("Introduce las columnas de las matrices: \n");
  scanf("%i", &clms);

  printf("\nIntroduce los datos de la primer matriz: \n");

  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("\nIntroduce el elemento: [%d][%d]", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("\nIntroduce los datos de la segunda matriz:\n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("\nIntroduce el elemento: [%d][%d]", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }

  //! Matrix addition

  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  //! Print result

  printf("\nEl resultado de la suma, es: \n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("[%d] ", sum[i][j]);
      if (j == clms - 1)
      {
        printf("\n");
      }
    }
  }

  return sum[i][j];
}

//? Matrix substraction.
int MatrixSubstraction()
{
  //! Get values

  printf("Introduce las filas de las matrices: \n");
  scanf("%i", &rws);
  printf("Introduce las columnas de las matrices: \n");
  scanf("%i", &clms);

  printf("Ingresa los valores de la primer matriz:\n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("Ingresa el elemento [%d][%d]", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Ingresa los valores de la segunda matriz:\n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("Ingresa el elemento [%d][%d]", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }

  //! Matrix substraction

  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      subst[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }

  //! Print result

  printf("\nEl resultado de la resta, es: \n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("[%d] ", subst[i][j]);
      if (j == clms - 1)
      {
        printf("\n");
      }
    }
  }
  return subst[i][j];
}

//? Matrix multiplication
int MatrixMultip()
{
  //! Getting values

  printf("Introduce las filas de las matrices: \n");
  scanf("%i", &rws);
  printf("Introduce las columnas de las matrices: \n");
  scanf("%i", &clms);

  printf("Ingresa los datos de la primer matriz:\n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("Ingresa el elemento [%d][%d]", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Ingresa los datos de la segunda matriz:\n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("Ingresa el elemento [%d][%d]", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }

  //! Matrix multiplication

  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      mult[i][j] = matrix1[i][j] * matrix2[i][j];
    }
  }

  //! Print result

  printf("El resultado de la multiplicacion, es:\n");
  for (i = 0; i < rws; i++)
  {
    for (j = 0; j < clms; j++)
    {
      printf("[%d] ", mult[i][j]);
      if (j == clms - 1)
      {
        printf("\n");
      }
    }
  }

  return mult[i][j];
}