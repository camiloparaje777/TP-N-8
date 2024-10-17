#include <iostream>
#include <string>
#include <sstream>  

int contarPalabras(const std::string& cadena) {
    std::stringstream ss(cadena); 
    std::string palabra;
    int contador = 0;

    while (ss >> palabra) {
        contador++;
    }

    return contador;
}

int main() {
    std::string cadena;
    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, cadena);

    int numeroDePalabras = contarPalabras(cadena);
    std::cout << "La cadena contiene " << numeroDePalabras << " palabras." << std::endl;

    return 0;
}
