#include <iostream>

using namespace std;

int main()
{
    int repeticao = 1;
    while (repeticao == 1)
    {
        // Declaração Variaveis
        string nome;
        string nome_loja;
        double etiqueta1, etiqueta2, etiqueta3, etiqueta4, etiqueta5, valor_total, valor_total2, valor_total3, valor_total4, valor_total5;
        double valor_parcelado1, valor_parcelado2, valor_parcelado3, valor_parcelado4, valor_parcelado5;
        int Forma_de_pagamento, quantidade_parcelas;

        // Inicio do codigo
        cout << "Informe seu nome: " << endl;
        cin >> nome;

        cout << "Informe o nome de sua loja: " << endl;
        cin >> nome_loja;

        cout << "-------- Formas de Pagamento --------" << endl;
        cout << "- 1.A vista                         -" << endl;
        cout << "- 2.A vista no cartao de credito    -" << endl;
        cout << "- 3.Parcelado em 2 ou 3 ou 4 vezes  -" << endl;
        cout << "- 4.Parcelado em 5 vezes            -" << endl;
        cout << "-------------------------------------" << endl;
        // Iniciando o processo para as etiquetas
        cout << "Informe o valor da primeira etiqueta: " << endl;
        cin >> etiqueta1;

        cout << "Informe o a forma de pagamento desejada: " << endl;
        cin >> Forma_de_pagamento;

        if (Forma_de_pagamento == 1)
        {
            valor_total = etiqueta1 - (etiqueta1 * 0.20);
        }
        else if (Forma_de_pagamento == 2)
        {
            valor_total = etiqueta1 - (etiqueta1 * 0.08);
        }
        else if (Forma_de_pagamento == 3)
        {
            cout << "Informe a quantidade de parcelamento(maximo de 4 vezes): " << endl;
            cin >> quantidade_parcelas;
            if (quantidade_parcelas == 2)
            {
                valor_total = etiqueta1 + (etiqueta1 * 0.02);
                valor_parcelado1 = valor_total / 2;
            }
            else if (quantidade_parcelas == 3)
            {
                valor_total = etiqueta1 + (etiqueta1 * 0.05);
                valor_parcelado1 = valor_total / 3;
            }
            else if (quantidade_parcelas == 4)
            {
                valor_total = etiqueta1 + (etiqueta1 * 0.15);
                valor_parcelado1 = valor_total / 4;
            }
            else
            {
                cout << "Quantidade de parcelas invalidas!!" << endl;
                return 0;
            }
        }
        else if (Forma_de_pagamento == 4)
        {
            valor_total = etiqueta1 + (etiqueta1 * 0.18);
            valor_parcelado1 = valor_total / 5;
        }
        else
        {
            cout << "Forma de pagamento invalida!!" << endl;
            return 0;
        }
        // Repetindo o processo para etiqueta2
        cout << "-------- Formas de Pagamento --------" << endl;
        cout << "- 1.A vista                         -" << endl;
        cout << "- 2.A vista no cartao de credito    -" << endl;
        cout << "- 3.Parcelado em 2 ou 3 ou 4 vezes  -" << endl;
        cout << "- 4.Parcelado em 5 vezes            -" << endl;
        cout << "-------------------------------------" << endl;

        cout << "Informe o valor da segunda etiqueta: " << endl;
        cin >> etiqueta2;

        cout << "Informe o a forma de pagamento desejada: " << endl;
        cin >> Forma_de_pagamento;

        if (Forma_de_pagamento == 1)
        {
            valor_total2 = etiqueta2 - (etiqueta2 * 0.20);
        }
        else if (Forma_de_pagamento == 2)
        {
            valor_total2 = etiqueta2 - (etiqueta2 * 0.08);
        }
        else if (Forma_de_pagamento == 3)
        {
            cout << "Informe a quantidade de parcelamento(maximo de 4 vezes): " << endl;
            cin >> quantidade_parcelas;
            if (quantidade_parcelas == 2)
            {
                valor_total2 = etiqueta2 + (etiqueta2 * 0.02);
                valor_parcelado2 = valor_total2 / 2;
            }
            else if (quantidade_parcelas == 3)
            {
                valor_total2 = etiqueta2 + (etiqueta2 * 0.05);
                valor_parcelado2 = valor_total2 / 3;
            }
            else if (quantidade_parcelas == 4)
            {
                valor_total2 = etiqueta2 + (etiqueta2 * 0.15);
                valor_parcelado2 = valor_total2 / 4;
            }
            else
            {
                cout << "Quantidade de parcelas invalidas!!" << endl;
                return 0;
            }
        }
        else if (Forma_de_pagamento == 4)
        {
            valor_total2 = etiqueta2 + (etiqueta2 * 0.18);
            valor_parcelado2 = valor_total2 / 5;
        }
        else
        {
            cout << "Forma de pagamento invalida!!" << endl;
            return 0;
        }
        // Repetindo o processo para etiqueta3
        cout << "-------- Formas de Pagamento --------" << endl;
        cout << "- 1.A vista                         -" << endl;
        cout << "- 2.A vista no cartao de credito    -" << endl;
        cout << "- 3.Parcelado em 2 ou 3 ou 4 vezes  -" << endl;
        cout << "- 4.Parcelado em 5 vezes            -" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Informe o valor da terceira etiqueta: " << endl;
        cin >> etiqueta3;

        cout << "Informe o a forma de pagamento desejada: " << endl;
        cin >> Forma_de_pagamento;

        if (Forma_de_pagamento == 1)
        {
            valor_total3 = etiqueta3 - (etiqueta3 * 0.20);
        }
        else if (Forma_de_pagamento == 2)
        {
            valor_total3 = etiqueta3 - (etiqueta3 * 0.08);
        }
        else if (Forma_de_pagamento == 3)
        {
            cout << "Informe a quantidade de parcelamento(maximo de 4 vezes): " << endl;
            cin >> quantidade_parcelas;
            if (quantidade_parcelas == 2)
            {
                valor_total3 = etiqueta3 + (etiqueta3 * 0.02);
                valor_parcelado3 = valor_total3 / 2;
            }
            else if (quantidade_parcelas == 3)
            {
                valor_total3 = etiqueta3 + (etiqueta3 * 0.05);
                valor_parcelado3 = valor_total3 / 3;
            }
            else if (quantidade_parcelas == 4)
            {
                valor_total3 = etiqueta3 + (etiqueta3 * 0.15);
                valor_parcelado3 = valor_total3 / 4;
            }
            else
            {
                cout << "Quantidade de parcelas invalidas!!" << endl;
                return 0;
            }
        }
        else if (Forma_de_pagamento == 4)
        {
            valor_total = etiqueta3 + (etiqueta3 * 0.18);
            valor_parcelado3 = valor_total3 / 5;
        }
        else
        {
            cout << "Forma de pagamento invalida!!" << endl;
            return 0;
        }
        // Repetindo o processo para etiqueta4
        cout << "-------- Formas de Pagamento --------" << endl;
        cout << "- 1.A vista                         -" << endl;
        cout << "- 2.A vista no cartao de credito    -" << endl;
        cout << "- 3.Parcelado em 2 ou 3 ou 4 vezes  -" << endl;
        cout << "- 4.Parcelado em 5 vezes            -" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Informe o valor da quarta etiqueta: " << endl;
        cin >> etiqueta4;

        cout << "Informe o a forma de pagamento desejada: " << endl;
        cin >> Forma_de_pagamento;

        if (Forma_de_pagamento == 1)
        {
            valor_total4 = etiqueta4 - (etiqueta4 * 0.20);
        }
        else if (Forma_de_pagamento == 2)
        {
            valor_total4 = etiqueta4 - (etiqueta4 * 0.08);
        }
        else if (Forma_de_pagamento == 3)
        {
            cout << "Informe a quantidade de parcelamento(maximo de 4 vezes): " << endl;
            cin >> quantidade_parcelas;
            if (quantidade_parcelas == 2)
            {
                valor_total4 = etiqueta4 + (etiqueta4 * 0.02);
                valor_parcelado4 = valor_total4 / 2;
            }
            else if (quantidade_parcelas == 3)
            {
                valor_total4 = etiqueta4 + (etiqueta4 * 0.05);
                valor_parcelado4 = valor_total4 / 3;
            }
            else if (quantidade_parcelas == 4)
            {
                valor_total4 = etiqueta4 + (etiqueta4 * 0.15);
                valor_parcelado4 = valor_total4 / 4;
            }
            else
            {
                cout << "Quantidade de parcelas invalidas!!" << endl;
                return 0;
            }
        }
        else if (Forma_de_pagamento == 4)
        {
            valor_total4 = etiqueta4 + (etiqueta4 * 0.18);
            valor_parcelado4 = valor_total4 / 5;
        }
        else
        {
            cout << "Forma de pagamento invalida!!" << endl;
            return 0;
        }
        // Repetindo o processo para etiqueta5
        cout << "-------- Formas de Pagamento --------" << endl;
        cout << "- 1.A vista                         -" << endl;
        cout << "- 2.A vista no cartao de credito    -" << endl;
        cout << "- 3.Parcelado em 2 ou 3 ou 4 vezes  -" << endl;
        cout << "- 4.Parcelado em 5 vezes            -" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Informe o valor da quinta etiqueta: " << endl;
        cin >> etiqueta5;

        cout << "Informe o a forma de pagamento desejada: " << endl;
        cin >> Forma_de_pagamento;

        if (Forma_de_pagamento == 1)
        {
            valor_total5 = etiqueta5 - (etiqueta5 * 0.20);
        }
        else if (Forma_de_pagamento == 2)
        {
            valor_total5 = etiqueta5 - (etiqueta5 * 0.08);
        }
        else if (Forma_de_pagamento == 3)
        {
            cout << "Informe a quantidade de parcelamento(maximo de 4 vezes): " << endl;
            cin >> quantidade_parcelas;
            if (quantidade_parcelas == 2)
            {
                valor_total5 = etiqueta5 + (etiqueta5 * 0.02);
                valor_parcelado5 = valor_total5 / 2;
            }
            else if (quantidade_parcelas == 3)
            {
                valor_total5 = etiqueta5 + (etiqueta5 * 0.05);
                valor_parcelado5 = valor_total5 / 3;
            }
            else if (quantidade_parcelas == 4)
            {
                valor_total5 = etiqueta5 + (etiqueta5 * 0.15);
                valor_parcelado5 = valor_total5 / 4;
            }
            else
            {
                cout << "Quantidade de parcelas invalidas!!" << endl;
                return 0;
            }
        }
        else if (Forma_de_pagamento == 4)
        {
            valor_total5 = etiqueta5 + (etiqueta5 * 0.18);
            valor_parcelado5 = valor_total5 / 5;
        }
        else
        {
            cout << "Forma de pagamento invalida!!" << endl;
            return 0;
        }

        if (Forma_de_pagamento == 1)
        {
            cout << nome << " a loja da compra foi a: " << nome_loja << " o valor incial de usa compra foi: " << etiqueta1 << " o valor total de acordo com a forma de pagamento selecionada foi: " << valor_total << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta2 << " o valor total de acordo com a forma de pagamento selecionada foi: " << valor_total2 << endl;
            cout << " Terceira etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta3 << " o valor total de acordo com a forma de pagamento selecionada foi: " << valor_total3 << endl;
            cout << " Quarta etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta4 << " o valor total de acordo com a forma de pagamento selecionada foi: " << valor_total4 << endl;
            cout << " Quinta etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta5 << " o valor total de acordo com a forma de pagamento selecionada foi: " << valor_total5 << endl;
        }
        else if (Forma_de_pagamento == 3)
        {
            cout << nome << " a loja da compra foi a: " << nome_loja << " o valor incial de usa compra foi: " << etiqueta1 << " O valor total parcelado sera: " << valor_parcelado1 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta2 << " O valor total parcelado sera: " << valor_parcelado2 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta3 << " O valor total parcelado sera: " << valor_parcelado3 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta4 << " O valor total parcelado sera: " << valor_parcelado4 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta5 << " O valor total parcelado sera: " << valor_parcelado5 << endl;
        }
        else
        {
            cout << nome << " a loja da compra foi a: " << nome_loja << " o valor incial de usa compra foi: " << etiqueta1 << " O valor total parcelado sera: " << valor_parcelado1 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta2 << " O valor total parcelado sera: " << valor_parcelado2 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta3 << " O valor total parcelado sera: " << valor_parcelado3 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta4 << " O valor total parcelado sera: " << valor_parcelado4 << endl;
            cout << " Segunda etiqueta: "
                 << " o valor incial de usa compra foi: " << etiqueta5 << " O valor total parcelado sera: " << valor_parcelado5 << endl;
        }

        cout << "Deseja realizar as compras novamente? 1- Sim 2 - nao" << endl;
        cin >> repeticao;

        return 0;
    }
};