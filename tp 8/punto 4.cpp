#include <iostream>
#include <string>

bool buscarPalabra(const std::string& cadena, const std::string& palabra) {
    return cadena.find(palabra) != std::string::npos;
}

void imprimirResultado(bool encontrada, const std::string& palabra) {
    if (encontrada) {
        std::cout << "La palabra '" << palabra << "' se encuentra en la cadena." << std::endl;
    } else {
        std::cout << "La palabra '" << palabra << "' no se encuentra en la cadena." << std::endl;
    }
}

int main() {
    std::string cadena;
    std::string palabra;

    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, cadena);

    std::cout << "Introduce la palabra a buscar: ";
    std::getline(std::cin, palabra);

    bool encontrada = buscarPalabra(cadena, palabra);

    imprimirResultado(encontrada, palabra);

    return 0;
}
