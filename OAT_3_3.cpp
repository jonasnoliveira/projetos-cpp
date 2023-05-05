#include <iostream>

using namespace std;

double powerFunction(double base, int exponent)
{
  double result = 1;

  for (size_t i = 1; i <= exponent; i++)
  {
    result *= base;
  }

  return result;
}

int main()
{
  char opcao;

  do
  {
    double base, result;
    int exponent;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite o expoente: ";
    cin >> exponent;

    result = powerFunction(base, exponent);
    cout << base << "^" << exponent << " = " << result << endl;

    cout << "Deseja calcular outra potencia? (s/n) ";
    cin >> opcao;

  } while (opcao == 's' || opcao == 'S');

  return 0;
}