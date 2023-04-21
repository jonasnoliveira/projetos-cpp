#include <iostream>

using namespace std;

#include <math.h>

#define VA1 std::cout <<"Parabens concluiu a VA1"<<endl;

int main (){

float a;
cout << "Digite o valor de a: \n";
cin >> a;

float funcao = ((a*a)-(3*a)-5);
cout << "O valor da funcao e: " << funcao <<endl;

if (funcao < 0){
cout << "O valor da funcao e um numero negativo\n" << endl;
}else if (funcao < 10 && funcao > 0){
cout << " O valor da funcao esta abaixo de 10\n" << endl;
}else if (funcao > 10 && funcao < 30){
cout << " O valor da funcao esta entre 10 e 30\n" <<endl;
}else if (funcao > 30){
cout << "O valor da funcao esta acima de 30\n" <<endl;}

VA1;
return 0;

}