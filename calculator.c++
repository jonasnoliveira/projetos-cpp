#include <iostream>
using namespace std;

int main()
{
  float number1;
  float number2;
  char operation;
  float result;

  cout << "Digite o primeiro numero: \n";
  cin >> number1;

  while (true)
  {
    cout << "Digite a operacao \n";
    cin >> operation;

    if (operation == '+' or operation == '-' or operation == '*' or operation == '/')
    {
      break;
    }
    cout << "digite uma operação valida \n";
    cout << "Ex: +, -, /, * \n";
  }

  cout << "Digite o segundo numero \n";
  cin >> number2;

  switch (operation)
  {
  case '+':
    result = number1 + number2;
    break;
  case '-':
    result = number1 - number2;
    break;
  case '/':
    result = number1 / number2;
    break;
  case '*':
    result = number2 * number2;
    break;
  }

  cout << number1 << operation << number2 << "=" << result;

  return 0;
}
