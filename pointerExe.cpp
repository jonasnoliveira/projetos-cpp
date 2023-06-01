#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    int countAlunos;

    cout << "Digite a quantidade de alunos: ";
    cin >> countAlunos;

    string nomeAlunos[countAlunos];
    double notaAlunos[countAlunos];

    string *ponteiroNomeAlunos[countAlunos];
    double *ponteiroNotaAlunos[countAlunos];

    for (size_t i = 0; i < countAlunos; i++)
    {
        cout << "Digite o nome do aluno:" << endl;
        cin >> nomeAlunos[i];
        ponteiroNomeAlunos[i] = &nomeAlunos[i];

        cout << "Digite a nota do aluno:" << endl;
        cin >> notaAlunos[i];
        ponteiroNotaAlunos[i] = &notaAlunos[i];
    }

    for (size_t i = 0; i < countAlunos; i++)
    {
        cout << "Valor da memoria do ponteiro do nome de " << nomeAlunos[i] << " e: " << ponteiroNomeAlunos[i] << endl;
        cout << "Valor da memoria do ponteiro da nota de " << nomeAlunos[i] << " e: " << ponteiroNotaAlunos[i] << "e o seu valor e: " << *ponteiroNotaAlunos[i] << endl;
    }

    return 0;
}