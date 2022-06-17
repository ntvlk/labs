#include <iostream>

int main() {
    std::cout << "\t*Первое задание*\n";
    std::cout << "1 13 4221";
    std::cout << "\n\t*Второе задание*\n[Введите символ, который будет между числами]";
    char ch;
    std::cin >> ch;
    std::cout << "1" << ch << "13" << ch << "4221";
    std::cout << "\n\t*Третье задание*\n[Введите число, которое будет повторяться]";
    int num;
    std::cin >> num;
    std::cout << num << "  " << num << "  " << num;
    std::cout << "\n\t*Четвертое задание*\n[Введите число, которое будет повторяться]";
    int num1;
    std::cin >> num1;
    std::cout << num1%100;
}
