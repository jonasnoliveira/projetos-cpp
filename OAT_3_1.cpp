#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float gradeTest1, gradeTest2, gradeTest3, gradeTest4, averageStudent, averageClass;

  int numberTest = 4;

  cout << "Digite a nota da primeira prova: ";
  cin >> gradeTest1;

  cout << "Digite a nota da segunda prova: ";
  cin >> gradeTest2;

  cout << "Digite a nota da terceira prova: ";
  cin >> gradeTest3;

  cout << "Digite a nota da quarta prova: ";
  cin >> gradeTest4;

  // Solicita a média da turma ao usuário
  cout << "Digite a média da turma: ";
  cin >> averageClass;

  averageStudent = (gradeTest1 + gradeTest2 + gradeTest3 + gradeTest4) / numberTest;

  if (averageStudent > averageClass)
  {
    cout << "A media do aluno e acima da media da turma." << endl;
  }
  else if (averageStudent < averageClass)
  {
    cout << "A media do aluno e abaixo da media da turma." << endl;
  }
  else
  {
    cout << "A media do aluno esta na media da turma." << endl;
  }

  return 0;
}