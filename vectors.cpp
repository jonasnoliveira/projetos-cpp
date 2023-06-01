#include <iostream>

using namespace std;

int main()
{
    string names[2];
    int lengthNames = 2;

    for (size_t i = 0; i < lengthNames; i++)
    {
        cout << "Informe seu nome: " << endl;
        cin >> names[i];
    }

    for (size_t i = 0; i < lengthNames; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}