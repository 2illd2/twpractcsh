

#include <iostream>
#include <cmath>

using namespace std;



int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    while (true) {
        int choice;
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Частное" << endl;
        cout << "4. Произведение" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 9) {
            cout << "Выход из программы." << endl;
            break;
        }

        double num1, num2;
        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Введите делимое: ";
            cin >> num1;
            cout << "Введите делитель: ";
            cin >> num2;
            if (num2 != 0) {
                cout << "Результат: " << num1 / num2 << endl;
            }
            else {
                cout << "Деление на ноль!" << endl;
            }
            break;
        case 4:
            cout << "Введите первый множитель: ";
            cin >> num1;
            cout << "Введите второй множитель: ";
            cin >> num2;
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case 5:
            cout << "Введите основание: ";
            cin >> num1;
            cout << "Введите показатель степени: ";
            cin >> num2;
            cout << "Результат: " << pow(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0) {
                cout << "Результат: " << sqrt(num1) << endl;
            }
            else {
                cout << "Нельзя извлечь корень из отрицательного числа!" << endl;
            }
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << num1 / 100 << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0) {
                cout << "Результат: " << factorial(num1) << endl;
            }
            else {
                cout << "Факториал не может быть меньше 0" << endl;
            }
            break;
        }
    }

    return 0;
}