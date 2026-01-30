#include <iostream> // Нажимаем Enter здесь!

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Введіть оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введіть два числа: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Помилка: Ділення на нуль!";
            break;
        default:
            cout << "Помилка! Неправильний оператор.";
            break;
    }

    return 0;
}