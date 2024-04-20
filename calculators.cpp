#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operation;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Resultado: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error: No se puede dividir por cero." << endl;
        }
        break;
    default:
        cout << "Operación no válida." << endl;
    }

    return 0;
}
