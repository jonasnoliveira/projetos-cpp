#include <iostream>
using namespace std;

int main()
{
    int numberTeachers = 2;
    float hours[numberTeachers], hourValue[numberTeachers], salary[numberTeachers];

    for (int i = 0; i < 2; i++)
    {
        cout << "Digite a quantidade de horas/aula do professor " << i + 1 << ": ";
        cin >> hours[i];
        cout << "Digite o valor por hora recebido pelo professor " << i + 1 << ": R$ ";
        cin >> hourValue[i];

        salary[i] = hours[i] * hourValue[i];
    }

    if (salary[0] > salary[1])
    {
        cout << "O professor 1 tem salario total maior: R$ " << salary[0] << "\n";
    }
    else if (salary[1] > salary[0])
    {
        cout << "O professor 2 tem salario total maior: R$ " << salary[1] << "\n";
    }
    else
    {
        cout << "Os professores têm salarios iguais: R$ " << salary[0] << "\n";
    }

    return 0;
}