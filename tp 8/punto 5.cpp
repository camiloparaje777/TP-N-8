#include <iostream>
#include <string>
#include <algorithm>  
bool esAnagrama(std::string cadena1, std::string cadena2) {
    cadena1.erase(remove(cadena1.begin(), cadena1.end(), ' '), cadena1.end());
    cadena2.erase(remove(cadena2.begin(), cadena2.end(), ' '), cadena2.end());
    
    std::transform(cadena1.begin(), cadena1.end(), cadena1.begin(), ::tolower);
    std::transform(cadena2.begin(), cadena2.end(), cadena2.begin(), ::tolower);

    if (cadena1.length() != cadena2.length()) {
        return false;
    }

    std::sort(cadena1.begin(), cadena1.end());
    std::sort(cadena2.begin(), cadena2.end());

    return cadena1 == cadena2;
}

void imprimirResultado(bool sonAnagramas, const std::string& cadena1, const std::string& cadena2) {
    if (sonAnagramas) {
        std::cout << "Las cadenas '" << cadena1 << "' y '" << cadena2 << "' son anagramas." << std::endl;
    } else {
        std::cout << "Las cadenas '" << cadena1 << "' y '" << cadena2 << "' NO son anagramas." << std::endl;
    }
}

int main() {
    std::string cadena1, cadena2;

    std::cout << "Introduce la primera cadena: ";
    std::getline(std::cin, cadena1);
    std::cout << "Introduce la segunda cadena: ";
    std::getline(std::cin, cadena2);

    bool sonAnagramas = esAnagrama(cadena1, cadena2);
    imprimirResultado(sonAnagramas, cadena1, cadena2);

    return 0;
}
