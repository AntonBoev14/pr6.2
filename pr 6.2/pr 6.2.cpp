#include <iostream>

int main() {
    setlocale(0, "ru");
    int number = 7;

    std::cout << "Таблица умножения на " << number << ":\n";

    for (int i = 2; i <= 9; i++) {
        int result = number * i;
        std::cout << number << " x " << i << " = " << result << std::endl;
    }

    return 0;

}
