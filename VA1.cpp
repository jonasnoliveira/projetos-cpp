#include <iostream>
#include <cmath>

using namespace std;

#define va1 std::cout << "Parabens voce concluiu a VA1" << endl;

float mathFunction(int x)
{
  return pow(x, 2) - 3 * x - 5;
}

int main()
{
  const string functionFormula = "Formula: x^2-3x-5";
  const string mensage = "O valor da funcao ";
  float x;

  cout << functionFormula << endl;
  cout << "Digite o valor de x: \n";
  cin >> x;

  if (mathFunction(x) > 10 && mathFunction(x) <= 30)
  {
    cout << mensage << "esta entre 10 e 30" << endl;
  }
  else if (mathFunction(x) >= 0 || mathFunction(x) >= 30)
  {
    if (mathFunction(x) < 10)
    {
      cout << mensage << "esta abaixo de 10" << endl;
    }
    else
    {
      cout << mensage << "esta acima de 30" << endl;
    }
  }
  else if (mathFunction(x) < 0)
  {
    cout << mensage << "e um numero negativo" << endl;
  }

  va1;

  return 0;
}