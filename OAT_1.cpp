#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;

double calculateAreaCircle(double radius) {
    if (radius < 0) {
        cout << "O raio deve ser um valor positivo." << endl;
        return 0.0;
    }
    return PI * pow(radius, 2);
}

int main() {
    double radius;
    cout << "Digite o valor do raio do círculo: ";
    cin >> radius;
    
    double area = calculateAreaCircle(radius);
    if (area > 0) {
        cout << "A área do círculo é: " << area << endl;
    }
    
    return 0;
}