#include <iostream>

int main() {
    int rows, seats;

    std::cout << "Введите количество рядов (1..10): ";
    std::cin >> rows;
    std::cout << "Введите количество мест в ряду (1..10): ";
    std::cin >> seats;

    if (rows < 1 || rows > 10 || seats < 1 || seats > 10) {
        std::cout << "Значения должны быть в диапазоне от 1 до 10!" << std::endl;
        return 1;
    }

    std::cout << "\n--- Схема зала ---" << std::endl;
  
    for (int r = 1; r <= rows; ++r) {
    
        for (int s = 1; s <= seats; ++s) {
            std::cout << "[" << r << ":" << s << "] ";
        }
        std::cout << std::endl; // Перенос строки после завершения каждого ряда
    }

    return 0;
}
