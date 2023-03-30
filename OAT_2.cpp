//Jonas, Gustavo, Vinicius.

#include <iostream>
using namespace std;

#define valueAlcohol 3.00;
#define valueGasoline 6.00;
#define autonomyAlcohol 5.5;
#define autonomyGasoline 8.1;

double calculateAutonomy(double valueSupplied, double autonomy)
{
  return valueSupplied * autonomy;
}

int main()
{
  double distance, valueSupplied, autonomy, fuelValue;
  string fuelType;

  cout << "Digite a distância a percorrer (em km): ";
  cin >> distance;

  cout << "Qual o tipo de combustível (alcool ou gasolina)? ";
  cin >> fuelType;

  if (fuelType == "alcool")
  {
    fuelValue = valueAlcohol;
    autonomy = autonomyAlcohol;
  }
  else if (fuelType == "gasolina")
  {
    fuelValue = valueGasoline;
    autonomy = autonomyGasoline;
  }
  else
  {
    cout << "Tipo de combustível inválido." << endl;
    return 0;
  }

  cout << "Digite o valor abastecido: ";
  cin >> valueSupplied;

  double totalAutonomy = calculateAutonomy(valueSupplied, autonomy);

  cout << "Autonomia do carro: " << totalAutonomy << " km" << endl;

  if (totalAutonomy >= distance)
  {
    cout << "O carro conseguirá chegar ao destino." << endl;
  }
  else
  {
    cout << "O carro não conseguirá chegar ao destino." << endl;
  }

  return 0;
}