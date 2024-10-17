#include <iostream>

double bytesAKilobytes(double bytes) {
    return bytes / 1024;
}

double terabytesAMegabytes(double terabytes) {
    return terabytes * 1024 * 1024;
}

double gigabytesAPetabytes(double gigabytes) {
    return gigabytes / 1024 / 1024;
}

int main() {
    int opcion;
    double cantidad;

    std::cout << "Seleccione la conversión que desea realizar:\n";
    std::cout << "1. Bytes a Kilobytes\n";
    std::cout << "2. Terabytes a Megabytes\n";
    std::cout << "3. Gigabytes a Petabytes\n";
    std::cout << "Opción: ";
    std::cin >> opcion;

    std::cout << "Ingrese la cantidad: ";
    std::cin >> cantidad;

    switch (opcion) {
        case 1:
            std::cout << cantidad << " Bytes son " << bytesAKilobytes(cantidad) << " Kilobytes.\n";
            break;
        case 2:
            std::cout << cantidad << " Terabytes son " << terabytesAMegabytes(cantidad) << " Megabytes.\n";
            break;
        case 3:
            std::cout << cantidad << " Gigabytes son " << gigabytesAPetabytes(cantidad) << " Petabytes.\n";
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }

    return 0;
}
