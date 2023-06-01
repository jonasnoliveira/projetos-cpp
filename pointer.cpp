#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    string 
    int number = 1;
    int otherNumber = 10;
    int *numberPointer = &number;

    cout << "Valor da variavel " << number << endl;
    cout << "Valor da memoria do ponteiro " << pointer << endl;
    cout << "Valor do ponteiro " << *pointer << endl;

    *pointer = 3;

    cout << "Valor do ponteiro atualizado " << *pointer << endl;
    cout << "Valor da variavel atualizada pelo ponteiro " << number << endl;

    *pointer = otherNumber;
    cout << "Mudando o apontamento do ponteiro " << *pointer << endl;

    *pointer = NULL;

    cout << "Pointeiro recebendo valor nulo " << *pointer << endl;

    return 0;
}