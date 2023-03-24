#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string validateUsername = "Jonas";
  const string validatePassword = "12345678";
  string username, password;
  bool loggedIn = false;

  // Loop do login
  while (!loggedIn)
  {
    cout << "Entre com o seu username: ";
    cin >> username;
    cout << "Entre com a sua senha: ";
    cin >> password;

    // Verifica se as credenciais estão corretas
    if (username == validateUsername && password == validatePassword)
    {
      loggedIn = true;
      cout << "Login bem sucedido!" << endl;
    }
    else if (username != validateUsername && password == validatePassword)
    {
      cout << "Username inválido. Tente novamente." << endl;
    }
    else if (username == validateUsername && password != validatePassword)
    {
      cout << "Password inválida. Tente novamente." << endl;
    }
    else
    {
      cout << "Credenciais inválidas. Tente novamente." << endl;
    }
  }

  // Continuação do programa após o login bem sucedido
  cout << "Bem-vindo, " << username << "!" << endl;

  return 0;
}