#include <iostream>

using namespace std;

int fatorial(int number)
{
  int result = 1;

  for (int i = 1; i <= number; i++)
  {
    result *= i;
  }

  return result;
}

int main()
{

  int number;

  while (true)
  {
    cout << "Digite um numero inteiro positivo: ";
    cin >> number;

    if (number >= 0)
    {
      int result = fatorial(number);
      cout << "O fatorial de " << number << " e " << result << "." << endl;
      break;
    }
    cout << "O numero informado e invalido. Digite um numero inteiro positivo." << endl;
  }

  return 0;
}