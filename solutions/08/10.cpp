#include <iostream>
using namespace std;

void resultado(int num1, int num2, int *num)
{
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        *num = num1 + num2;
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        *num = num1 - num2;
    }
    else
    {
        *num = num1 * num2;
    }
}

int main()
{
    int num = 5;
    int *puntero = &num;

    cout << "Valor original: " << num << endl;

    resultado(3, 3, puntero);

    cout << "Valor actulizado: " << num << endl;

    return 0;
}