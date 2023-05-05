#include <iostream>
using namespace std;

int main()
{
    const double values = 5;
    int listValues[(int)values];
    double sum = 0;

    for (int i = 0; i < values; i++)
    {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> listValues[i];
        sum += listValues[i];
    }

    float media = (float)sum / values;

    cout << "Valores maiores que a media (" << media << "):";
    for (int i = 0; i < values; i++)
    {
        if (listValues[i] > media)
        {
            cout << " " << listValues[i];
        }
    }
    cout << endl;

    return 0;
}
