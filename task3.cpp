#include <iostream>

int main() {
    int seat;

    do {
        std::cout << "Введите номер места (1..30): ";
        std::cin >> seat;
        
        if (seat < 1 || seat > 30) {
            std::cout << "Некорректный номер места! Попробуйте снова." << std::endl;
        }
    } while (seat < 1 || seat > 30);

    if (seat <= 15) {
        std::cout << "Место " << seat << " находится в ЛЕВОЙ половине зала." << std::endl;
    } else {
        std::cout << "Место " << seat << " находится в ПРАВОЙ половине зала." << std::endl;
    }

    return 0;
}
