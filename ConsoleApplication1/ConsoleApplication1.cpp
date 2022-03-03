#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    bool End = true, find = true;
    long int num, sum, sum_1;
    double a, b;
    int number, n, m, years, pound, shill, penny, pound_1, shill_1, penny_1, cheirs, friends, A, B, C, D;
    char znach, zn, vibor;
    float Cel, Far, prochent, summa, summa_1, summ, razn;
    unsigned int numb;
    unsigned long fact = 1;
    while (End)
    {
        cout << "Выберите задание для проверки: ";
        cin >> number;
        switch (number)
        {
        case 1:
            //Первое задание
            system("cls");
            cout << "Введите любое целочисленное значение: ";
            cin >> num;
            for (int i = 1; i <= 200; i++)
            {
                cout << setw(3) << num * i;
                if (i % 10 == 0)
                {
                    cout << endl;
                }
            }
            break;
        case 2:
            system("cls");
            cout << "Нажмите на F для перевода из шкалы Цельсия в шкалу Фаренгейта.\nИли нажмите C для перевода из Фаренгейта в шкалу Цельсия: ";
            cin >> znach;
            if (znach == 'F')
            {
                cout << "Введите градусы Цельсия: ";
                cin >> Cel;
                cout << "Значение по Фаренгейту: " << Cel * (9.0 / 5.0) + 32.0 << endl;
            }
            else if (znach == 'C')
            {
                cout << "Введите градусы по Фарангейту: ";
                cin >> Far;
                cout << "Значение по Цельсию: " << (float)((Far - 32.0) / (float)(9.0 / 5.0)) << endl;
            }
            else
            {
                cout << "Ошибка ввода, повторите попытку...";
            }
            break;
        case 3:
            //Второе задание
            system("cls");
            num = 0;
            cout << "Введите число: ";
            while ((znach = _getche()) != '\r')
            {
                num = num * 10 + znach - '0';
            }
            cout << "Вы ввели число: " << num << endl;
            break;
        case 4:
            //Задание 4
            do
            {
                system("cls");
                cout << "Введите первый операнд, операцию и второй операнд: ";
                cin >> a >> zn >> b;
                switch (zn)
                {
                case '+':
                    cout << "Результат равен " << a + b << endl;
                    break;
                case '-':
                    cout << "Результат равен " << a - b << endl;
                    break;
                case '*':
                    cout << "Результат равен " << a * b << endl;
                    break;
                case '/':
                    cout << "Результат равен " << a / b << endl;
                    break;
                default:
                    cout << "Вы ввели некорректные данные, повторите попытку!";
                    break;
                }
                cout << "Выполнить еще одну операциию (у/n)?" << endl;
                cin >> vibor;
                (vibor == 'n') ? find = false : find = true;
            } while (find);
            break;
        case 5:
            //Задание 5
            n = 20;
            m = 1;
            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << " ";
                }
                n--;
                for (int j = 0; j < m; j++)
                {
                    cout << "X";
                }
                m += 2;
                cout << endl;
            }
            break;
        case 6:
            //Задание 6. Factor.cpp
            system("cls");
            do
            {
                cout << "Enter the number: ";
                cin >> numb;
                fact = 1;
                for (int i = numb; i > 0; i--)
                {
                    fact *= i;
                }
                cout << "Factorial is " << fact << endl;
            } while (numb != 0);
            break;
        case 7:
            //Задание 7
            system("cls");
            cout << "Введите начальный вклад: ";
            cin >> summa;
            cout << "Введите число лет: ";
            cin >> years;
            cout << "Введите процентную ставку: ";
            cin >> prochent;
            for (int i = 0; i < years; i++)
            {
                summa += summa * (prochent / 100.0);
            }
            cout << "Через " << years << " лет вы получите: " << summa << " денег." << endl;
            break;
        case 8:
            //Задание 8
            find = true;
            cout << "Введите количество футов, шиллингов, пенсов через пробел: ";
            cin >> pound >> shill >> penny;
            sum = pound * 20 * 12 + shill * 12 + penny;
            do
            {
                cout << "Введите количество футов, шиллингов, пенсов через пробел: ";
                cin >> pound >> shill >> penny;
                sum += pound * 20 * 12 + shill * 12 + penny;
                sum_1 = sum;
                pound = sum_1 / (12 * 20);
                sum_1 -= pound * 12 * 20;
                shill = sum_1 / 12;
                sum_1 -= shill * 12;
                penny = sum_1;
                cout << "Сумма равна: " << pound << '.' << shill << '.' << penny << endl;
                cout << "Продолжить складывать? (y/n)";
                cin >> vibor;
                (vibor == 'n') ? find = false : find = true;
            } while (find);
            break;
        case 9:
            //Номер 9
            system("cls");
            cout << "Введите количество cheirs: ";
            cin >> cheirs;
            cout << "Введите количество гостей: ";
            cin >> friends;
            summa = 1;
            for (int i = 0; i < cheirs; i++)
            {
                summa *= (friends - i);
            }
            cout << "Количество вариантов рассадки равно: " << summa << endl;
            break;
        case 10:
            //Номер 10
            system("cls");
            cout << "Введите вашу сумму: ";
            cin >> summa;
            cout << "Введите желаемую сумму: ";
            cin >> summa_1;
            cout << "Введите процентную ставку: ";
            cin >> prochent;
            years = 0;
            while (summa < summa_1)
            {
                summa += summa * (prochent / 100.0);
                years++;
            }
            cout << "Количество лет равно: " << years << endl;
            break;
        case 11:
            //Номер 11
            system("cls");
            do
            {
                find = true;
                cout << "Введите первое количество фунтов, шиллингов и пенсов через пробел: ";
                cin >> pound >> shill >> penny;
                summa = pound * 20 * 12 + shill * 12 + penny;
                cout << "Введите операцию(*(на число), +, -): ";
                cin >> vibor;
                switch (vibor)
                {
                case '+':
                    cout << "Введите второе количество фунтов, шиллингов и пенсов через пробел: ";
                    cin >> pound_1 >> shill_1 >> penny_1;
                    summa_1 = pound_1 * 20 * 12 + shill_1 * 12 + penny_1;
                    summ = summa + summa_1;
                    pound = summ / (20 * 12);
                    summ -= pound * 20 * 12;
                    shill = summ / 12;
                    summ -= shill * 12;
                    penny = summ;
                    cout << "Сумма: " << pound << "." << shill << "." << penny << " фунтов" << endl;
                    break;
                case '-':
                    cout << "Введите вторую сумму фунтов: ";
                    cin >> pound_1 >> shill_1 >> penny_1;
                    summa_1 = pound_1 * 20 * 12 + shill_1 * 12 + penny_1;
                    razn = summa - summa_1;
                    if (razn >= 0)
                    {
                        pound = razn / (20 * 12);
                        razn -= pound * 20 * 12;
                        shill = razn / 12;
                        razn -= shill * 12;
                        penny = razn;
                        cout << "Разность: " << pound << "." << shill << "." << penny << " фунтов" << endl;
                    }
                    break;
                case '*':
                    cout << "Введите одно целое число: ";
                    cin >> n;
                    summ = (pound * 20 * 12 + shill * 12 + penny) * n;
                    pound = summ / (20 * 12);
                    summ -= pound * 20 * 12;
                    shill = summ / 12;
                    summ -= shill * 12;
                    penny = summ;
                    cout << "Сумма: " << pound << "." << shill << "." << penny << " фунтов" << endl;
                    break;
                default:
                    cout << "Вы ввели не корректные данные, повторите попытку..." << endl;
                    break;
                }
                cout << "Хотите начать заново?(y/n): ";
                cin >> vibor;
                (vibor == 'n') ? find = false : find = true;
            } while (find);
            break;
        case 12:
            //Номер 12
            system("cls");
            find = true;
            do
            {
                cout << "Введите первый операнд вида a/b(где / - пробел): ";
                cin >> A >> B;
                cout << "Введите операцию(+,-,*,/): ";
                cin >> vibor;
                cout << "Введите второй операнд вида c/d(где / - пробел): ";
                cin >> C >> D;
                switch (vibor)
                {
                case '+':
                    cout << "Сумма: " << (A * D + B * C) << "/" << (B * D) << endl;
                    break;
                case '-':
                    cout << "Разность: " << (A * D - B * C) << "/" << (B * D) << endl;
                    break;
                case '*':
                    cout << "Произведение: " << (A * C) << "/" << (B * D) << endl;
                    break;
                case '/':
                    cout << "Чатное: " << (A * D) << "/" << (B * C) << endl;
                    break;
                default:
                    cout << "Вы ввели не корректные данные, повторите попытку..." << endl;
                    break;
                }
                cout << "Хотите продолжить или выйти?(y/n) ";
                cin >> vibor;
                (vibor == 'n') ? find = false : find = true;
            } while (find);
            break;
        default:
            End = false;
            break;
        }
    }
}