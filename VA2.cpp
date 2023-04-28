#include <iostream>
using namespace std;

#define paymentMethodOne cout << "1 - A vista, em dinheiro ou cheque!\n";
#define paymentMethodTwo cout << "2 - A vista, no cartão de crédito!\n";
#define paymentMethodThree cout << "3 - Parcelado em 2 ou 3 ou 4 vezes!\n";
#define paymentMethodFour cout << "4 - Parcelado em 5 vezes!\n";

int main()
{
    string clientName;
    string storeName;
    string mensageInicialValue = "O valor inicial do seu produto foi de: ";
    string spacer = "_______________________________________________________________ \n";

    int paymentMethods;
    int installmentPaymentMethod;
    double inicialValue, finalValue;

    cout << "Digite o nome do cliente: \n";
    cin >> clientName;

    cout << "Digite o nome da loja: \n";
    cin >> storeName;

    string mensage = clientName + " voce comprou seus produtos na loja " + storeName;

    for (size_t i = 1; i <= 5; i++)
    {
        paymentMethodOne;
        paymentMethodTwo;
        paymentMethodThree;
        paymentMethodFour;

        cout << "Digite o valor da Etiqueta:";
        cin >> inicialValue;

        cout << "Escolha uma das formas a cima:\n";
        cout << "Digitando 1, 2, 3, 4\n";
        cin >> paymentMethods;

        switch (paymentMethods)
        {
        case 1:
            finalValue = inicialValue * 0.8;
            cout << mensage << endl;
            cout << mensageInicialValue;
            cout << inicialValue << endl;
            cout << "O valor final com desconto de 20% e de: ";
            cout << finalValue << endl;

            cout << spacer << endl;

            break;
        case 2:
            finalValue = inicialValue * 0.92;
            cout << mensage << endl;
            cout << mensageInicialValue;
            cout << inicialValue << endl;
            cout << "O valor final com desconto de 8% e de: ";
            cout << finalValue << endl;

            cout << spacer << endl;
            break;
        case 3:
            while (true)
            {
                cout << "Informe em quantas vezes sera efetuada sua compra\n";
                cout << "Digitando 2, 3, 4\n";
                cin >> installmentPaymentMethod;

                if (installmentPaymentMethod == 2)
                {
                    finalValue = (inicialValue * 1.02) / 2;
                    cout << mensage << endl;
                    cout << mensageInicialValue << endl;
                    cout << inicialValue << endl;
                    cout << "O valor de cada parcela com acrecimo de 2% e de: \n";
                    cout << finalValue << endl;

                    cout << spacer << endl;

                    break;
                }
                else if (installmentPaymentMethod == 3)
                {
                    finalValue = (inicialValue * 1.05) / 3;
                    cout << mensage << endl;
                    cout << mensageInicialValue << endl;
                    cout << inicialValue << endl;
                    cout << "O valor de cada parcela com acrecimo de 5% é de: \n";
                    cout << finalValue << endl;

                    cout << spacer << endl;
                    break;
                }
                else if (installmentPaymentMethod == 4)
                {
                    finalValue = (inicialValue * 1.15) / 4;
                    cout << mensage << endl;
                    cout << mensageInicialValue << endl;
                    cout << inicialValue << endl;
                    cout << "O valor de cada parcela com acrecimo de 15% e de: \n";
                    cout << finalValue << endl;

                    cout << spacer << endl;
                    break;
                }
                else
                {
                    cout << "Digite o valor correto";
                }
                break;
            }
            break;
        case 4:
            finalValue = (inicialValue * 1.18) / 5;
            cout << mensage << endl;
            cout << mensageInicialValue << endl;
            cout << inicialValue << endl;
            cout << "O valor de cada parcela com acrecimo de 18% e de: \n";
            cout << finalValue << endl;

            cout << spacer << endl;
            break;
        }
    }

    return 0;
}