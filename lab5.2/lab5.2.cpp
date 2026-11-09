// lab5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, h;
    double x, y;

    double maxY;
    double maxX;

    // Ввод исходных данных
    cout << "Введите начало отрезка a: ";
    cin >> a;

    cout << "Введите конец отрезка b: ";
    cin >> b;

    cout << "Введите шаг h: ";
    cin >> h;

    // Проверка исходных данных
    if (a > b || h <= 0)
    {
        cout << "Ошибка: проверьте введённые данные.";
        return 1;
    }

    // Начальная инициализация максимума
    maxY = -1;
    maxX = a;

    cout << "\nТаблица значений функции y = 1 / (x^2 + 1)\n";
    cout << setw(12) << "x"
        << setw(12) << "y" << endl;

    cout << fixed << setprecision(4);

    // Табулирование функции
    for (x = a; x <= b + h * 0.000001; x += h)
    {
        // Вычисление значения функции
        y = 1.0 / (x * x + 1.0);

        // Вывод значений
        cout << setw(12) << x
            << setw(12) << y << endl;

        // Поиск максимального значения
        if (y > maxY)
        {
            maxY = y;
            maxX = x;
        }
    }

    // Вывод результата поиска максимума
    cout << "\nМаксимальное значение функции: "
        << maxY << endl;

    cout << "Точка максимума: "
        << maxX << endl;

    return 0;
}
