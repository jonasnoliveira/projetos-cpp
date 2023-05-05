#include <iostream>

using namespace std;

int main()
{
  int minimumAge = 21, userAge;
  double maximumIncome = 1200.00, useIncome;

  cout << "Digite sua idade: ";
  cin >> userAge;

  cout << "Digite a sua renda: ";
  cin >> useIncome;

  if (userAge > minimumAge && useIncome < maximumIncome)
  {
    cout << "Voce podera participar do programa";
  }
  else
  {
    cout << "Voce nao podera participar do programa";
  }

  return 0;
}