#include <stdio.h>
#include <math.h>

// ? Funciones de calculadora básicas
//* suma
float Add(float num1, float num2)
{
  float sum;

  sum = num1 + num2;

  return sum;
}
//* resta
float Subtraction(float num1, float num2)
{
  float substract;

  substract = num1 - num2;

  return substract;
}
//* multiplicacion
float Multiply(float num1, float num2)
{
  float multiplication;

  multiplication = num1 * num2;

  return multiplication;
}
//* division
float Divide(float num1, float num2)
{
  float division;

  division = num1 / num2;

  return division;
}

// ? Tipos de elevacion

//* raiz cuadrada
float Square_Root(float num1)
{
  float squareRoot;

  squareRoot = sqrt(num1);

  return squareRoot;
}
//* elevacion al cuadrado
float Square_Elevation(float num1)
{
  float squareElev;

  squareElev = pow(num1, 2);

  return squareElev;
}
//* elevacion al cubo
float Cube_Elevation(float num1)
{
  float cubeElev;

  cubeElev = pow(num1, 3);

  return cubeElev;
}
//* elevacion a la cuarta
float Fourth_Elevation(float num1)
{
  float fourthElev;

  fourthElev = pow(num1, 4);

  return fourthElev;
}

// ? Trigonometric functions

const float PI = 3.1416;
//* seno
float Sine(float num1)
{
  float sine, degree;

  degree = num1 * (PI / 180);
  sine = sin(degree);

  return sine;
}
//* coseno
float Cosen(float num1)
{
  float cosine, degree;

  degree = num1 * (PI / 180);
  cosine = cos(degree);

  return cosine;
}
//* tangente
float Tangent(float num1)
{
  float tangent, degree;

  degree = num1 * (PI / 180);
  tangent = tan(degree);

  return tangent;
}
//* Cosecante
float Cosecant(float num1)
{
  float coSecant, degree;

  degree = num1 * (PI / 180);
  coSecant = 1 / sin(degree);

  return coSecant;
}
//* Secante
float Secant(float num1)
{
  float secant, degree;

  degree = num1 * (PI / 180);
  secant = 1 / cos(degree);

  return secant;
}
//* Cotangente
float Cotangent(float num1)
{
  float cotangent, degree;

  degree = num1 * (PI / 180);
  cotangent = 1 / tan(degree);

  return cotangent;
}
//? Logarithmic functions

float NaturalLogarithm(float num1)
{
  float Log;

  Log = log(num1);

  return Log;
}

//? Matrix addition, substaction, multiplication and division.

//! Matrix declaration
