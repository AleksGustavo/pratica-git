#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1;

    cout << "Digite um n�mero para saber se � par ou �mpar: ";
    cin >> num1;

    if (num1 % 2 == 0) {
        cout << "O n�mero � par";
    } else {
        cout << "O n�mero � impar";
    }
}
