#include <iostream>

int main() {
    int age = 0;
    int children_count = 0;
    int adults_count = 0;

    std::cout << "Вводите возраст зрителей (для окончания введите -1):" << std::endl;

    while (age != -1) {
        std::cout << "Введите возраст: ";
        std::cin >> age;

        if (age == -1) {
            break;
        }

        if (age < 0) {
            std::cout << "Возраст не может быть отрицательным. Повторите ввод." << std::endl;
            continue;
        }

        if (age < 18) {
            children_count++;
        } else {
            adults_count++;
        }
    }

    std::cout << "\nРезультаты подсчёта:" << std::endl;
    std::cout << "Количество детей (младше 18): " << children_count << std::endl;
    std::cout << "Количество взрослых: " << adults_count << std::endl;

    return 0;
}
