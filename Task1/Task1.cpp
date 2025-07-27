#include <iostream>
#include <Windows.h>
#include "myMath.h"

enum class Mode
{
    ADD = 1,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    POW,
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите первое число: ";
    int number1{};
    std::cin >> number1;
    std::cout << "Введите второе число: ";
    int number2{};
    std::cin >> number2;

    myMath math(number1, number2);

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    int temp{};
    std::cin >> temp;
    Mode mode = static_cast<Mode>(temp);
    
    int result;
    switch (mode)
    {
    case Mode::ADD:
        result = math.add();
        std::cout << number1 << " плюс " << number2 << " = " << result;
        break;
    case Mode::SUBTRACTION:
        result = math.subtraction();
        std::cout << number1 << " минус " << number2 << " = " << result;
        break;
    case Mode::MULTIPLICATION:
        result = math.multiplication();
        std::cout << number1 << " умножить " << number2 << " = " << result;
        break;
    case Mode::DIVISION:
        result = math.division();
        std::cout << number1 << " разделить " << number2 << " = " << result;
        break;
    case Mode::POW:
        result = math.pow();
        std::cout << number1 << " в теспени " << number2 << " = " << result;
        break;
    }
}
