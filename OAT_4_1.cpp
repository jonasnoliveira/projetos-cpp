#include <iostream>
using namespace std;

int main()
{
    int populationA = 90000000;
    int populationB = 200000000;
    float growthRateA = 0.03;
    float growthRateB = 0.015;
    int years = 0;

    while (populationA < populationB)
    {
        populationA += populationA * growthRateA;
        populationB += populationB * growthRateB;
        years++;
    }

    cout << "Populacao do pais A: " << populationA << endl;
    cout << "Populacao do pais B: " << populationB << endl;
    cout << "Numero de anos necessarios: " << years << endl;

    return 0;
}