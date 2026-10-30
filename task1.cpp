#include <iostream>

int main() {
    int n;
    std::cout << "Введите число рядов (1..20): ";
    std::cin >> n;

    if (n < 1 || n > 20) {
        std::cout << "Некорректное число рядов!" << std::endl;
        return 1;
    }

    int total_cost = 0;

    std::cout << "\nЦена билетов по рядам:" << std::endl;
    for (int row = 1; row <= n; ++row) {
        int price = (row <= 5) ? 8 : 10; // 1-5 ряды — 8, остальные — 10
        std::cout << "Ряд " << row << ": " << price << " руб." << std::endl;
        total_cost += price;
    }

    std::cout << "\nСуммарная стоимость одного места в каждом ряду: " << total_cost << " руб." << std::endl;

    return 0;
}
