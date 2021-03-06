﻿// lab 4.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double R2; // вхідний параметр
    double y = 0; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "R2 = "; cin >> R2;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -R)
        y = (x + 2) / R;
    else
        if (-R < x && x <= 0)
            y = sqrt(R * R - x * x) - R;
        else
            if (0 < x && x <= R2)
                y = -sqrt(R2 * R2 - x * x) - R2;
            else
                if (R2 < x && x <= 4)
                    y = R;
                else
                    if (4 < x)
                        y = 1 / 2 * (R * (x - 4) - R);
    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
