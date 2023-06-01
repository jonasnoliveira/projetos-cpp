#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    int countStudents;

    cout << "Digite a quantidade de alunos: ";
    cin >> countStudents;

    string nameStudents[countStudents];
    double notaAlunos[countStudents];

    string *pointerNameStudents[countStudents];
    double *pointerNoteStudents[countStudents];

    for (size_t i = 0; i < countStudents; i++)
    {
        cout << "Digite o nome do aluno:" << endl;
        cin >> nameStudents[i];
        pointerNameStudents[i] = &nameStudents[i];

        cout << "Digite a nota do aluno:" << endl;
        cin >> notaAlunos[i];
        pointerNoteStudents[i] = &notaAlunos[i];
    }

    for (size_t i = 0; i < countStudents; i++)
    {
        cout << "Valor da memoria do ponteiro do nome de " << nameStudents[i] << " e: " << pointerNameStudents[i] << endl;
        cout << "Valor da memoria do ponteiro da nota de " << nameStudents[i] << " e: " << pointerNoteStudents[i] << "e o seu valor e: " << *pointerNoteStudents[i] << endl;
    }

    return 0;
}