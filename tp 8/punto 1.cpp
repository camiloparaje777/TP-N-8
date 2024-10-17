#include <iostream>

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Divisi�n por cero no permitida." << std::endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char operacion;

    std::cout << "Introduce el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo n�mero: ";
    std::cin >> num2;
    std::cout << "Introduce la operaci�n (+, -, *, /): ";
    std::cin >> operacion;

    switch (operacion) {
        case '+':
            std::cout << "Resultado: " << sumar(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << restar(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << multiplicar(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Resultado: " << dividir(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Operaci�n no v�lida." << std::endl;
            break;
    }

    return 0;
}
